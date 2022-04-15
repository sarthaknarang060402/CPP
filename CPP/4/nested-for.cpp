#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int A[i][j];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<i<<" "<<j<<endl;
            A[i][j]=0;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//     j--->
// i   0 1 2 
// | 0|0 0 0|
// | 1|0 0 0|
// V 2|0 0 0|