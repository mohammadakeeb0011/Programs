#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        void s_name(std::string name_l)
        {
            name = name_l;
        }
    
    //overload constructor
    Player(){
        cout<<"No arg constructor called"; 
    }
    Player(std::string name){
        cout<<"String arg constructor called";
    }
    Player(std::string name,int health,int xp ){
        cout<<"Three arg constructor called";
    }
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }
};
int main()
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    {
        Player frank;
        frank.set_namTe("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villan( "Villan", 1000 2);
        villain.set_name("Villain");
    }
        Player *enemy = new Player;
        enemy->set_name("Enemy");
        
        Player *level_boss = new Player("Level Boss",1000, 300);
        level_boss->set_name("Level Boss");
        
        delete enemy;
        delete level_boss; 
        
    return 0;
}