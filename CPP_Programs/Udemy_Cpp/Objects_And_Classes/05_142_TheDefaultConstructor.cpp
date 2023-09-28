#include <iostream>
#include <string>
using namespace std;
class Player{
    private:
        std::string name;
        int health;
        int xp
    public:
        void set_name(std::string name_val) {
        name = name_val;
        }
        std::string get_name() {
        return name;
        }
        
        
        Player(){
            name = "None";
            health = 0;
            xp =0;
            }
        
        Player(std::string name_val,int health_val,int xp_val){
            name = name_val;
            health = health_val;
            xp = xp_val;
            }
            
};

int main(){
    
    Player frank;
    frank.set_name("Frank");
    cout<<frank.get_name()<<endl;
    return 0;
}