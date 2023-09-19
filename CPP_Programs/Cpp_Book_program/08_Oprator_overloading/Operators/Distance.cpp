#include "Distance.h"

Distance::Distance(int feet_val,float inches_val): feet(feet_val), inches(inches_val)
{ }
Distance Distance::operator + (Distance dd)const
{
    int f = feet + dd.feet;
    float in = inches + dd.inches;
    if(in >= 12)
    {
        in -=12;
        f++;
    }
    return Distance(f,in);
}

Distance Distance::operator += (Distance dd)
{
    feet += dd.feet;
    inches += dd.inches;
    if(inches >= 12)
    {
        inches -=12;
        feet++;
    }
    return Distance(feet,inches);
}


Distance Distance::operator -= (Distance dd)
{
    feet -= dd.feet;
    inches -= dd.inches;
    if(inches < 0)
    {
        inches +=12;
        feet--;
    }
    return Distance(feet,inches);
}

Distance Distance::operator - (Distance dd)const
{
    int f = feet - dd.feet;
    float in = inches - dd.inches;
    if(in < 0)
    {
        in +=12;
        f--;
    }
    return Distance(f,in);
}


bool Distance::operator < (Distance dd)const
{
    float d1 = feet + (inches/12);
    float d2 = dd.feet + (dd.inches/12);
    return (d1 < d2)? true : false;
}

bool Distance::operator > (Distance dd)const
{
    float d1 = feet + (inches/12);
    float d2 = dd.feet + (dd.inches/12);
    return (d1 > d2)? true : false;
}

bool Distance::operator <= (Distance dd)const
{
    float d1 = feet + (inches/12);
    float d2 = dd.feet + (dd.inches/12);
    return (d1 <= d2)? true : false;
}

bool Distance::operator >= (Distance dd)const
{
    float d1 = feet + (inches/12);
    float d2 = dd.feet + (dd.inches/12);
    return (d1 >= d2)? true : false;
}
Distance Distance::operator ++ ()
{
    feet += 1;
    return Distance(feet,inches);
}
Distance Distance::operator -- ()
{
    feet -= 1;
    return Distance(feet,inches);
}

Distance Distance::operator ++ (int)
{
    feet += 1;
    return Distance(feet);                              // returns only feet  and initilise inches to 0.0
}
Distance Distance::operator -- (int)
{
    feet -= 1;
    return Distance(feet);                              // returns only feet  and initilise inches to 0.0
}

void Distance::display()
{
    cout<<feet<<"\'"<<inches<<'\"'<<endl;
}
void Distance::get()
{
    cout<<"Enter feet:";
    cin>>feet;
    cout<<"Enter inches:";
    cin>>inches;
}