#include<iostream>
using namespace std;
int main()
{
    int n, factor=0;
    cout<<"enter n ";
    cin>>n;
    
    for(int i=n-1;i>1;i--)//for proper factors exclude 1 and the number itself
    {
        
        if(n%i==0){
        factor++;}
    }
    cout<<"total proper factors "<<factor<<endl;
    if (factor>0)cout<<"hence prime";
    else cout<<"hence not prime";
    return 0;
}