#include<iostream>
using namespace std;

class Deep{
    private:
        int * data;
    public:
        void set_data_val(int d){*data = d;}
        int get_data_val(){return *data;}

        Deep(int d);                             // Constructor
        Deep(const Deep &source);             // Copy constructor
        ~Deep();                                 // Destructor
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}
Deep::Deep(const Deep &source)              // Using deligating constructors
    :Deep(*source.data)
{
    cout<<"Copy constructor - Deep copy "<<endl;
}
Deep::~Deep(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}
void display_Deep(Deep s)
{
    cout<<s.get_data_val()<<endl;
}
int main()
{
    Deep obj1(100);
    display_Deep(obj1);

    Deep obj2(obj1);
    obj2.set_data_val(10000);       // This dose not changes the val of obj1.data also

    return 0;
}