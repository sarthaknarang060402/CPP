#include<iostream>
using namespace std;
enum day{mon=2,tue,wed,thu,fri,sat,sun};
//enum helps us to define multiple variables and assigns value 0123... to them automatically.. we can customize the values too..
int main()
{
    day d=mon;
    cout<<d<<endl;
    cout<<mon;
    return 0;
}