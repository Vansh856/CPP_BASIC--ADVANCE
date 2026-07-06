#include<iostream>
using namespace std;


class FileHandler{
 public:
    FileHandler(){
        cout<<"File opened. Reserving hard drive space."<<endl;
    }
    ~FileHandler(){
        cout<<"File closed. Hard drive space freed."<<endl;
    }
    
};

int main(){
    cout<<"Starting OS tasks"<<endl;
    {
        FileHandler obj;
        cout<<"OS tasks finished"<<endl;
    }
}