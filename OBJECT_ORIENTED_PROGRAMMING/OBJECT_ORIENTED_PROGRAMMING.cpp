#include 
using namespace std;
class Enemy{
public:
    string name="jhon";
    int power=1000;


void attack(){
    cout<<"the "<<name<<" will strike with power "<<power<<endl;
}

void run(){
    cout<<name+" is running";
}

};
int main()
{


    Enemy first=Enemy();
    first.attack();
    first.run();
    
    return 0;

}