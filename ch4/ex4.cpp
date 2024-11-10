//ex4.cpp
#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int eNumber;
    float eCompensation;
};

int main()
{
    employee e1, e2, e3;
    cout<<"\nPlease enter first employee information: ";
    cout<<"\nemployee number: ";
    cin>>e1.eNumber;
    cout<<"employee's compensation in dollars: ";
    cin>>e1.eCompensation;
    cout<<"\nPlease enter second employee information: ";
    cout<<"\nemployee number: ";
    cin>>e2.eNumber;
    cout<<"employee's compensation in dollars: ";
    cin>>e2.eCompensation;
    cout<<"\nPlease enter third employee information: ";
    cout<<"\nemployee number: ";
    cin>>e3.eNumber;
    cout<<"employee's compensation in dollars: ";
    cin>>e3.eCompensation;
    cout<<"\nDetails of first employee are, employee number is "<<e1.eNumber<<" and employee compensation is "<<e1.eCompensation;
    cout<<"\nDetails of second employee are, employee number is "<<e2.eNumber<<" and employee compensation is "<<e2.eCompensation;
    cout<<"\nDetails of third employee are, employee number is "<<e3.eNumber<<" and employee compensation is "<<e3.eCompensation;
}
