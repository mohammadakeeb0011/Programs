#include<iostream>
#include<string>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////
class time12{
    private:
        bool pm;
        int hrs;
        int mins;
    public:
        time12() : pm(true), hrs(0), mins(0)
        {}
        time12(bool ap, int h, int m): pm(ap), hrs(h), mins(m)
        {}

        void display() const
        {
            cout<<hrs <<':';
            if(mins < 10)
                cout<<'0';
            cout<< mins << ' ';
            string am_pm = pm ? "p.m." : "a.m.";
            cout<< am_pm;
        }
};
//////////////////////////////////////////////////////////////////////////////////////////////////
class time24{
    private:
        unsigned short hrs;
        unsigned short mins;
        unsigned short sec;
    public:
        time24() : hrs(0), mins(0), sec(0)
        {}
        time24(unsigned short h, unsigned short m, unsigned short s): hrs(h), mins(m), sec(s)
        {}

        void display() const
        {
            if(hrs < 10)
                cout<<'0';
            cout<<hrs <<':';
            if(mins < 10)
                cout<<'0';
            cout<< mins << ':';
            if(sec < 10)
                cout<<'0';
            cout<< sec <<endl; 
        }
        void set_time()
        {
            cout<<"\nHours   = "; cin>>hrs;
            cout<<"\nMinutes = "; cin>>mins;
            cout<<"\nSeconds = "; cin>>sec;
        }

        operator time12() const;
};
///////////////////////////////////////////////////////////////////////////////////////////////////
time24::operator time12() const
{
    int hrs24 = hrs;
    bool pm = hrs24 < 12 ? false : true;

    int roundMins = sec < 30 ? mins : mins+1;
    if(roundMins == 60)
    {
        roundMins=0;
        ++hrs24;
        if(hrs24 == 12 || hrs24 == 24)
            pm = (pm == true) ? false : true;
    }
    int hrs12 = (hrs24 < 13) ? hrs24 : hrs24-12;
    if(hrs12 == 0)
    {   hrs12=12; pm=false;}

    return time12(pm, hrs12, roundMins);
}
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int h, m, s;
    while(true)
    {
        cout<< "Enter 24-hour time: \n";
        cout<< "   Hours (0 to 23): "; cin>> h;
        if(h > 23)
            return(1);
        cout<< "   Minutes: "; cin>> m;
        cout<< "   Seconds: "; cin>> s;

        time24 t24(h, m, s);
        cout<< "You entered: ";
        t24.display();

        time12 t12 = t24;

        cout<< "\n12-hour time: ";
        t12.display();
        cout<< "\n\n";
    }
    return 0;
}