#include<iostream>
#include<array>
using namespace std;
int main() {
array<int,4> array1={100,200,300,400};
int* p=&array1;
for(int i=0;i<4;i++){
cout<<*p;
p++;
}


return 0;

}