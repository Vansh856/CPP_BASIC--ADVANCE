#include<iostream>
using namespace std;
class BankAccount{
private:
    int balance=0;
public:
    void deposite(int amount){
    balance=amount+balance;
    cout<<amount<<" added to your account"<<endl;
}


void printBalance(){
    cout<<"your balance is "<<balance;
}

};
int main() {
    BankAccount obj1;
    obj1.deposite(500);
    obj1.printBalance();
return 0;
}