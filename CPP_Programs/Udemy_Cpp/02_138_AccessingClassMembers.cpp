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
    void talk(string text_to_say);
    bool is_dead();
};

class Account{
    //attributes
    string name;
    double balance;
    
    //methods
    bool deposit(double balance);
    bool withdraw(double balance);
};

int main(){
    
    Account frank account;
    frank account.name = "Frank's account";
    frank_account.balance = 5000.0;
    frank_account.deposit(1000.0);
    frank_account.withdraw(1000.0);
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("l will destroy you!");
    return O;
}