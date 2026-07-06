#include<iostream>
using namespace std;
int main() {
int scorce=100;
int * scrpointer=&scorce;
cout<<scrpointer<<endl;
cout<<*scrpointer<<endl;
*scrpointer=500;
cout<<scorce;


return 0;

}