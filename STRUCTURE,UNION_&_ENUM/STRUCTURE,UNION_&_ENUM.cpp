#include<iostream> 
using namespace std;
struct Player{
    int id;
    float score;
};
enum Difficulty{
    Easy,
    Medium,
    Hard,
};
int main()
{
    Player p1;
    p1.id=100;
    p1.score=95.5;
    
    
    Difficulty currentLevel=Medium;
    cout<<p1.id<<endl<<p1.score<<endl<<currentLevel;
    
    return 0;

}