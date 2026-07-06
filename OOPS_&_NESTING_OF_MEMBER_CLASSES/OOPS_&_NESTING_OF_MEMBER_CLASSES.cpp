#include<iostream>
using namespace std;


class UserAccount{
private:
    int validatePassword(int pass){
        if (pass==1234){
            return 1;
        }
        else{
            return 0;
        }
    }
    public:
        void login(int pass){
        if (validatePassword(pass)){
            cout<<"Login Success"<<endl;
        }
        else{
            cout<<"Login Failed";
        }
    }
};


int main()
{
    UserAccount obj1;
    obj1.login(1234);
    obj1.login(2134);
    
    
    return 0;

}