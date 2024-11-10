//Excecise 6
#include<iostream>
using namespace std;

enum eType{
    laborer, secretary, manager, accountant, executive, researcher};

int main()
{
    char  input;
    eType type;

    cout<<"\nEnter employee type, first letter only (laborer, secretary, manager, accountant, executive, researcher): ";
    cin>>input;

    switch (input)
    {
    case 'l':
        type = laborer;
        break;
    case 's':
        type = secretary;
        break;
    case 'm':
        type = manager;
        break;
    case 'a':
        type = accountant;
        break;
    case 'e':
        type = executive;
        break;
    case 'r':
        type = researcher;
        break;
    
    default:
        cout<<"Invalid input. Please try again."<<endl;
        return 1;
    }

    switch (type)
    {
    case laborer:
        cout<<"laborer"<<endl;
        break;
    case secretary:
        cout<<"secretary"<<endl;
        break;
    case manager:
        cout<<"manager"<<endl;
        break;
    case accountant:
        cout<<"accountant"<<endl;
        break;
    case executive:
        cout<<"executive"<<endl;
        break;
    case researcher:
        cout<<"researcher"<<endl;
        break;
    }
    return 0;
}