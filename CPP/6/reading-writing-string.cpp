#include<iostream>
using namespace std;
int main()
{
    char a[50];
    cout<<"enter name\n";
    cin.get(a,50);
    cout<<a;
    cin.getline(a,50);
    cout<<a;
    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     string a;
//     cout<<"enter name\n";
//     getline(cin,a);
//     cout<<a;
//     return 0;
// }