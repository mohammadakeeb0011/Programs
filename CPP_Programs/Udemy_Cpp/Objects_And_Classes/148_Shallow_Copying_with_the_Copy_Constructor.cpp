#include<iostream>
using namespace std;

class Shallow{
    private:
        int * data;
    public:
        void set_data_val(int d){*data = d;}
        int get_data_val(){return *data;}

        Shallow(int d);                             // Constructor
        Shallow(const Shallow &source);             // Copy constructor
        ~Shallow();                                 // Destructor
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}
Shallow::Shallow(const Shallow &source)
    :data(source.data)
{
    cout<<"Copy constructor - Shallow copy "<<endl;
}
Shallow::~Shallow(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}
void display_shallow(Shallow s)
{
    cout<<s.get_data_val()<<endl;
}
int main()
{
    Shallow obj1(100);
    display_shallow(obj1);

    Shallow obj2(obj1);
    obj2.set_data_val(10000);       // THis changes the val of obj1.data also

    return 0;
}