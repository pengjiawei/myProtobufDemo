//
// Created by root on 18-1-18.
//
#include <fstream>
#include "hello.pb.h"
using namespace std;
int main(){
    const string saved_file = "./hello";
    hello::HelloWorld* msg1;
    hello::HelloArray helloArray;

    msg1 = helloArray.add_helloworld();
    msg1->set_id(01);
    msg1->set_str("hello_world1");

    msg1 = helloArray.add_helloworld();
    msg1->set_id(02);
    msg1->set_str("hello_world2");

    printf("size = %d\n",helloArray.helloworld_size());
    fstream output(saved_file.c_str(),ios::out | ios::trunc | ios::binary);
    if(!helloArray.SerializeToOstream(&output)){
        cout << "Error" <<endl;
    }
    return 0;
}