#include<iostream>
using namespace std;

struct time
{
    int hours, minutes, seconds;
};

int main()
{
    time t1;

    cout<<"\nEnter hours: ";
    cin>>t1.hours;
    cout<<"\nEnter minutes: ";
    cin>>t1.minutes;
    cout<<"\nEnter seconds: ";
    cin>>t1.seconds;

    long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    cout<<"\nDisplaying total seconds:\n\t\t\t\t "<<totalsecs<<"\n";
    cout<<endl;
    return 0;
}