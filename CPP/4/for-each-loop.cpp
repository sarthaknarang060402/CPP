#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int A[n]={1,2,3,4,5,6};
    for(int x:A)cout<<++x;           //doesnt change original array as it copies into x and then display
    cout<<endl;
    for(int i=0;i<n;i++)cout<<A[i];
    cout<<endl;
    for(int i=0;i<n;i++)cout<<++A[i];//directly uses the array values so changes are inflicted
    cout<<endl;
    for(int i=0;i<n;i++)cout<<A[i];
    cout<<endl;
    for(int &x:A)cout<<++x;          //to inflict changes in for-each we use refernce (&)
    return 0;
}
//normal for-each declaration
// #include<iostream>
// using namespace std;
// int main()
// {
//     char A[]={'A','b','C',69,1};
//     for(auto x:A)cout<<x<<endl;   //for each x in A, auto is used if we dont know datatype used in array or for multiple datatypes
//     cout<<endl;
//     for(int x:A)cout<<x<<endl;
//     return 0;
// }