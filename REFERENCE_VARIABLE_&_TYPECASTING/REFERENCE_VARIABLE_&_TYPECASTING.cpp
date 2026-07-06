#include<iostream>
using namespace std;
int main() {
float pi=3.14;
cout<<(int)pi<<endl;
int score=100;
int &scoreref=score;
scoreref=500;
cout<<score;


return 0;

}