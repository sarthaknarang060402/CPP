#include<iostream>
using namespace std;
int main()
{
    int m=3,n=3,o=3;
    int A[m][n]={1,2,3,4,5,6,7,8,9};
    int B[n][o]={9,8,7,6,5,4,3,2,1};
    int C[m][o];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<o;j++)
        {
            C[i][j]=0;
            for(int k=0;k<n;k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<o;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}