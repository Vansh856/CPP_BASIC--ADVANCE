#include<iostream> 
using namespace std;
inline int cube(int s){
    return s*s*s;
}
int calculateBill(int iteamCost, int tax=5){
    return iteamCost+tax;
}
int main()
{
    cout<<cube(3)<<endl;
    cout<<calculateBill(100)<<endl;
    cout<<calculateBill(100,15);
    return 0;
}