#include<iostream>
using namespace std;
int main()
{
    char S[10]="hello";
    char T[]="hello";
    char *U="hello";
    char V[]={'h','e','l','l','o',0};//     0 or \0 both mean end
    char W[]={'h','e','l','l','o','\0','h','i'};
    char X[]={65,66,67,68,69,0};
    
    cout<<S<<endl;
    cout<<T<<endl;
    cout<<U<<endl;
    cout<<V<<endl;
    cout<<W<<endl;
    cout<<X<<endl;
    
    return 0;
}