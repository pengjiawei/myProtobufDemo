//
// Created by root on 18-1-18.
//
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

const int BUFF_SIZE = 1024;
using namespace std;
char buff[BUFF_SIZE];
void createSocketAndSend(const std::string& ip,const std::string& port){
    int sock_id;
    struct sockaddr_in serv_addr;
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(atoi(port.c_str()));

    inet_pton(AF_INET, ip.c_str(), &serv_addr.sin_addr);

    //connect socket
    if ((sock_id = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0) {

        printf("Create socket failed %d\n", sock_id);

    }

    int reuseflag = 1;
    setsockopt(sock_id, SOL_SOCKET, SO_REUSEADDR, (const char*) &reuseflag,
               sizeof(int)); //set reused

    struct linger clsflag;
    clsflag.l_onoff = 1;
    clsflag.l_linger = 2000;
    setsockopt(sock_id, SOL_SOCKET, SO_LINGER, (const struct linger*) &clsflag,
               sizeof(struct linger)); //set closed

    int i_ret = connect(sock_id, (struct sockaddr *) &serv_addr,
                        sizeof(serv_addr));

    printf("finish connect\n");
    if (i_ret == -1) {
        printf("Connect socket failed\n");
        close(sock_id);
    }

    send(sock_id, buff, sizeof(buff), 0);

    close(sock_id);
}

int main(){
    const string ip = "192.168.31.198";
    const string port = "12002";
    const string saved_file = "./hello";
    hello::HelloWorld* msg1;
    hello::HelloArray helloArray;

    msg1 = helloArray.add_helloworld();
    msg1->set_id(01);
    msg1->set_str("hello_world1");

    msg1 = helloArray.add_helloworld();
    msg1->set_id(02);
    msg1->set_str("hello_world2");

    msg1 = helloArray.add_helloworld();
    msg1->set_id(03);
    msg1->set_str("hello_world3");

    printf("size = %d\n",helloArray.helloworld_size());
    printf("len = %d\n",helloArray.ByteSize());
    fstream output(saved_file.c_str(),ios::out | ios::trunc | ios::binary);

    memset(buff, 0, BUFF_SIZE);

//    if(!helloArray.SerializeToOstream(&output)){
//        cout << "Error" <<endl;
//    }
    if(!helloArray.SerializeToArray(buff,BUFF_SIZE)){
        cout << "Error" <<endl;
    }

    createSocketAndSend(ip,port);
    if(!helloArray.ParseFromArray(buff,BUFF_SIZE)){
        cout << "Error Read"<<endl;
    }
    printf("helloArray size = %d\n",helloArray.helloworld_size());
    return 0;
}