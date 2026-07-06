#include<iostream>
using namespace std;
void addTenValue(int num){
    num=num+10;
    cout<<num<<endl;
}


void addTenRference(int &num){
    num=num+10;
    cout<<num<<endl;
}
int main()
{
    int score=50;
    addTenValue(score);
    cout<<score<<endl;
    addTenRference(score);
    cout<<score<<endl;
    return 0;
}