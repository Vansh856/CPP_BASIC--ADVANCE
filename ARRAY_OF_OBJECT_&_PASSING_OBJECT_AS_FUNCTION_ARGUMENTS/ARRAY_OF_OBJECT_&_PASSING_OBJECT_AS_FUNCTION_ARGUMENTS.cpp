#include<iostream>
using namespace std;


class Student{
 public:
    int rollNumber;
    
    void setRollNumber(int r){
        rollNumber=r;
    }
    
    void printRollNumber(){
        cout<<rollNumber<<endl;
    }
};
int main(){
    Student name[3];
    for(int i=0;i<3;i++){
        name[i].setRollNumber(i+1);
        name[i].printRollNumber();
    }
}