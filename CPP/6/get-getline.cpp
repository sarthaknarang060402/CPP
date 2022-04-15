// #include<iostream>
// using namespace std;
// int main()
// {
//      char a[50];
//      cout<<"enter name\n";
//      cin.get(a,50);
//      cout<<a<<endl;
//      cout<<"enter name again\n";          // takes enter key from before as input
//      cin.get(a,50);
//      cout<<a<<endl;
//      return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    char a[50];
    cout<<"enter name\n";
    cin.getline(a,50);
    cout<<a<<endl;
    cout<<"enter name again\n";// 
    cin.getline(a,50);
    cout<<a<<endl;
    return 0;
}