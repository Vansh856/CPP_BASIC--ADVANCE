#include<iostream>
using namespace std;


class Player{
public:
    static int playerCount;
    
    
    void spawnPlayer(){
        
        playerCount++;
    }
    
    static void getOnlinePlayer(){
        cout<<playerCount;
    }

};
int Player::playerCount;
int main()
{
    Player p1;
    Player p2;
    Player p3;
    p1.spawnPlayer();
    p2.spawnPlayer();
    p3.spawnPlayer();
    
    
    Player::getOnlinePlayer();
    
    return 0;

}