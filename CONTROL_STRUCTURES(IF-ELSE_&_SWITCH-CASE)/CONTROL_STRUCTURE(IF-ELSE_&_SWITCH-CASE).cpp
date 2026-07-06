#include<iostream>
using namespace std;
int main(){
int age;
cout<<"enter your age:- ";
cin>>age;
if (age<18){
cout<<"You are a minor"<<endl;
}
else{
cout<<"You are an adult"<<endl;
}
int game;
cout<<"welcom to the mystry game.Enter a no:- ";
cin>>game;
switch(game){
case 1:
cout<<"You won a car";
break;
case 2:
cout<<"You won a laptop";
break;
case 3:
cout<<"You won a smartphone";
break;
default:
cout<<"Invalid choice.No reward for you";
}
}