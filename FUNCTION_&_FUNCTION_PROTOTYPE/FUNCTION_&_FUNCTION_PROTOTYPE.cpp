#include <iostream> 
using namespace std;


int square(int);
void greet();
int main()
{
    greet();
    cout<<square(6);
    
    
    return 0;

}


int square(int x){
    return x*x;
}
void greet(){
    cout<<"Hello,Programmer!"<<endl;
}