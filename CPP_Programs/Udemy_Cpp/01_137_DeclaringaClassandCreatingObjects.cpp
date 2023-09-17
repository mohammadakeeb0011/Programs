#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Player{
    //attributes
    string name;
    int health;
    int xp;
    
    //methods
    void talk(string);
    bool is_dead();
};

int main(){
    Player akeeb;
    Player adnan;
    
    Player players[] {akeeb,adnan};
    
    vector<Player> player_vec{akeeb};
    player_vec.push_back(adnan);
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}