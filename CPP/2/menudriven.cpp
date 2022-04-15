#include<iostream>
using namespace std;
int main()
{
    int choice,x=5,y=2;
    cout<<"1-ADD\n2-SUBTRACT\n3-MULTIPLY\n4-DIVIDE"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<x+y;
        break;
        case 2:cout<<x-y;
        break;
        case 3:cout<<x*y;
        break;
        case 4:cout<<x/y;
        break;
        default:cout<<"error";
    }
    return 0;
}