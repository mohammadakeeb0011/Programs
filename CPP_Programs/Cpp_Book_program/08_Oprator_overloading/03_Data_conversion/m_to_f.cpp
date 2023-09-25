#include<iostream>
using namespace std;

class Distance{
    private:
    const float MTF;
        int feet;
        float inches;
    public:
        Distance():feet(0), inches(0.0), MTF(3.280833F)
        {}
        Distance(float meters): MTF(3.280833F)                      // conversion  from  FLoat to Distance
        {
            float fltfeet = MTF*meters;
            feet = int(fltfeet);
            inches = (fltfeet - feet)*12;
        }
        Distance(int f, float in):feet(f), inches(in), MTF(3.280833F)
        {}
        void getdis()
        {
            cout<<"\nEnter feet:"; cin>>feet;
            cout<<"\nEnter inches:"; cin>>inches;
        }
        void showdis()
        {
            cout<<feet<<"\'"<<inches<<'\"';
        }
        operator float() 
        {
            float fltfeet = inches/12;
            fltfeet += static_cast<float>(feet);
            return fltfeet/MTF;
        }
};

int main()
{
    
    return 0;
}