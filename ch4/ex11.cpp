//Excercise 11
#include<iostream>
using namespace std;

struct time
{
    int hours, minutes, seconds;
};

int main()
{
    time t1, t2, t3;

    cout<<"\nEnter hours for first user: ";
    cin>>t1.hours;
    cout<<"\nEnter minutes for first user: ";
    cin>>t1.minutes;
    cout<<"\nEnter seconds for first user: ";
    cin>>t1.seconds;
    
    cout<<"\nEnter hours for second user: ";
    cin>>t2.hours;
    cout<<"\nEnter minutes for second user: ";
    cin>>t2.minutes;
    cout<<"\nEnter seconds for second user: ";
    cin>>t2.seconds;

    int totalsecs1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    int totalsecs2 = t2.hours*3600 + t2.minutes*60 + t2.seconds;
    int totalsecs = totalsecs1 + totalsecs2;
    int hrs = totalsecs / 3600;
    int mns = (totalsecs - (3600*hrs))/60;
    int sec = totalsecs - ((3600*hrs)+(60*mns));
    t3.hours = hrs;
    t3.minutes = mns;
    t3.seconds = sec;
    cout<<"\nDisplaying total time:\n\t\t\t\t "<<t3.hours<<":"<<t3.minutes<<":"<<t3.seconds<<"\n";
    cout<<endl;
    return 0;
}