#include<iostream>
using namespace std;


class GameLevel{
public:
    void load(){
    cout<<"level loded into game";
    }
};
int main()
{
    GameLevel* level1= new GameLevel();
    level1->load();
    return 0;
}