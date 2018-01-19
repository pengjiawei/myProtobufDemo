#include <fstream>
#include "hello.pb.h"
#include <iostream>
#include<string.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<stdio.h>
#include <netinet/in.h>
#include<arpa/inet.h>
#include <unistd.h>
using namespace std;
const int BUFF_SIZE = 1024;
char recvData[BUFF_SIZE];
void createSocketAndReceive() {

    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(12002);
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    bzero(&(server_addr.sin_zero), 8);

    int server_sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock_fd == -1) {
        printf("Create goal socket failure!");
    }
    //绑定socket
    int bind_result = bind(server_sock_fd, (struct sockaddr *) &server_addr,
                           sizeof(server_addr));
    if (bind_result == -1) {
        printf("Set goal port failure!");
    }
    //listen
    printf("i am listening!!!!!!!!!!\n");
    if (listen(server_sock_fd, 3) == -1) {
        printf("Listen goal port error!");
    }

    fd_set server_fd_set;
    int max_fd = -1;
    struct timeval tv;
    int times = 0;
    tv.tv_sec = 5;
    tv.tv_usec = 0;

//    while (true) {

        FD_ZERO(&server_fd_set);
        FD_SET(server_sock_fd, &server_fd_set);

        int ret = select(server_sock_fd + 1, &server_fd_set, NULL, NULL, NULL);
        printf("select return = %d\n", ret);
        if (ret > 0) {
            int client_sock_fd = 0;
            bool flag = FD_ISSET(server_sock_fd, &server_fd_set);
            printf("is in the set? = %d\n", flag);
            if (flag) {
                struct sockaddr_in client_address;
                memset(&client_address, 0, sizeof(client_address));

                socklen_t address_len = sizeof(client_address);
                printf("i am accept!!!!!!!!!!\n");
                client_sock_fd = accept(server_sock_fd,
                                        (struct sockaddr *) &client_address, &address_len);

                printf("client_sock_fd = %d\n", client_sock_fd);
                if (client_sock_fd <= 0) {
                    printf("client_sock_tf_in_controller < 0");
                }
            }

            if (client_sock_fd != 0 && flag) {


                memset(recvData, 0, BUFF_SIZE);

                ssize_t byte_num = recv(client_sock_fd, recvData, sizeof(recvData),
                                        0);

                printf("recv_Ret = %d\n", byte_num);
                if (byte_num > 0) {
                    printf("%d\n", byte_num);
                } else if (byte_num < 0) {
                    close(client_sock_fd);
                    client_sock_fd = 0;
                } else {
                    FD_CLR(client_sock_fd, &server_fd_set);
                    client_sock_fd = 0;
                }
            }
        } else if (ret == 0) {
            FD_ZERO(&server_fd_set);
            FD_SET(server_sock_fd, &server_fd_set);
        }
//    }
}
int main(){
    createSocketAndReceive();
    const string saved_file = "./hello";
    hello::HelloWorld msg1;
    hello::HelloArray helloArray;;
    fstream input(saved_file.c_str(),ios::in | ios::binary);
//    if(!helloArray.ParseFromIstream(&input)){
//        cout << "Error Read"<<endl;
//    }

    if(!helloArray.ParseFromArray(recvData,BUFF_SIZE)){
        cout << "Error Read"<<endl;
    }

    printf("helloArray size = %d\n",helloArray.helloworld_size());
    for(int i = 0 ; i < helloArray.helloworld_size();++i){
        msg1 = helloArray.helloworld(i);
        printf("index = %d,id = %d\n",i,msg1.id());
        printf("index = %d,str = %s\n",i,msg1.str().c_str());
    }


    return 0;
}