#include <fstream>
#include "hello.pb.h"
using namespace std;
int main(){
    const string saved_file = "./hello";
    hello::HelloWorld msg1;
    hello::HelloArray helloArray;;
    fstream input(saved_file.c_str(),ios::in | ios::binary);
    if(!helloArray.ParseFromIstream(&input)){
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