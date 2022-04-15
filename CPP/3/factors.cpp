#include<iostream>
using namespace std;
int main()
{
    int n, factor=0;
    cout<<"enter n ";
    cin>>n;
    cout<<"factors of "<<n<<endl;
    for(int i=n-1;i>1;i--)//for proper factors exclude 1 and the number itself
    {
        if(n%i==0){cout<<i<<endl;
        factor++;}
    }
    cout<<"total factors "<<factor;
    return 0;
}