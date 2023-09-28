#include<iostream>
#include<vector>
using namespace std;

class Move{
    private:
        int * data;
    public:
        void set_data_val(int d){*data = d;}
        int get_data_val(){return *data;}

        Move(int d);                             // Constructor
        Move(const Move &source);                // Copy constructor
    //    Move(Move &&source);                     // Move constructor
        ~Move();                                 // Destructor
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout<<"Constructor for:"<<d<<endl;
}

Move::Move(const Move &source)              // Using deligating constructors
    :Move(*source.data)
{
    cout<<"Copy constructor - Deep copy for:"<<*data<<endl;
}

// Move::Move(Move &&source)              // Using deligating constructors
//     :data(source.data)
// {
//     source.data = nullptr;
//     cout<<"Move constructor - Moving resource:"<<*data<<endl;
// }

Move::~Move(){
    if(data != nullptr)
    cout<<"Destructor freeing data for:"<<*data<<endl;
    else
    cout<<"Destructor freeing data for nullptr"<<endl;
    delete data;
}

int main()
{
    vector<Move> vec;
    vec.push_back(Move{10});
    /*
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    vec.push_back(Move{90});
*/

    return 0;
}