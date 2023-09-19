#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    public:
        
//      Overloaded constructor
//      Player();
//      Player(string name_val);
//		Player(string name_val,int health_val, int xp_val);
        Player(string name_val="",int health_val=0, int xp_val=0);
        void display();
        
};

//	Overloaded constructor one
//	Player::Player()
//	{
//    name = "None";
//    health = 0;
//    xp = 0;
//	}
//
//	Overloaded constructor two
//	Player::Player(string name_val)
//	{
//    name = name_val;
//    health = 0;
//    xp = 0;
//	}
//
//	Overloaded constructor three
//	Player::Player(string name_val,int health_val, int xp_val)
//	{
//    name = name_val;
//    health = health_val;
//    xp = xp_val;
//	}

Player::Player(string name_val,int health_val, int xp_val):name(name_val),health(health_val),xp(xp_val)
        {
        	
		}
void Player::display()
		{
			cout<<"Name   = "<<name<<endl;
			cout<<"Health = "<<health<<endl;
			cout<<"XP	  = "<<xp<<endl;
			cout<<endl<<endl;
		}

int main(){
    Player akeeb;
    Player adnan("Adnan",30);
    Player hammad("Hammad");
    Player umaid("Umaid",70,100);
    akeeb.display();
    hammad.display();
    adnan.display();
    umaid.display();
    
    return 0;
}
