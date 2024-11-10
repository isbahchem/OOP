//excercise 5
#include<iostream>
using namespace std;

struct Date
{
    int day, month, year;
};

int main()
{
    cout<<"Enter date: ";
    Date date;
    char ch;
    cout<<"\nEnter day: ";
    cin>>date.day;
    cout<<"\nEnter month: ";
	cin>>date.month;
	cout<<"\nEnter year: ";
	cin>>date.year;
    cout<<"You entered: \n"<<date.day<<"."<<date.month<<"."<<date.year<<endl;
    return 0;
}