#include<iostream>
using namespace std;
int main()
{
    int spcount=0,vocount=0;
    string a="hello i am sarthak";    
    for(int i=0;a[i]!='\0';i++)
    {
        switch(a[i])
        {
            case 'a':vocount++;
            break;
            case 'e':vocount++;
            break;
            case 'i':vocount++;
            break;
            case 'o':vocount++;
            break;
            case 'u':vocount++;
            break;
            case ' ':spcount++;
            break;
        }
        
    }
    cout<<"total vowels are "<<vocount<<endl;
    cout<<"total words are "<<spcount+1<<endl;
    
    return 0;
}