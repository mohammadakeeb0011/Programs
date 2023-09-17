#ifndef _DISTANCE_H_
#define _DISTANCE_H_

class Distance
{
    private:
        int feet;
        float inches;
public:
    Distance():feet{0},inches{0.0}
    { }
    Distance(int,float)
    ~Distance();

};

#endif // _DISTANCE_H_
