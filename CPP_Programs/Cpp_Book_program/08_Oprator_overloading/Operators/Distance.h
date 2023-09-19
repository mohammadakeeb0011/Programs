#ifndef _DISTANCE_H_
#define _DISTANCE_H_

#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance(int feet_val=0,float inches_val=0.0);          //Constructor Parameters and Default Values
        Distance operator + (Distance)const;
        Distance operator += (Distance);
        Distance operator -= (Distance);
        Distance operator - (Distance)const;
        bool operator < (Distance)const;
        bool operator > (Distance)const;
        bool operator <= (Distance)const;
        bool operator >= (Distance)const;
        Distance operator ++ ();
        Distance operator -- ();
        Distance operator ++ (int);
        Distance operator -- (int);
        void display();
        void get();

};

#endif // _DISTANCE_H_
