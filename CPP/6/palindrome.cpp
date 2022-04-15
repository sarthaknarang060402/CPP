#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="malayalam";
    string b="";//will store reverse of string
    string::reverse_iterator it;
    int i;
    for(it=a.rbegin();it!=a.rend();it++){b.push_back(*it);}
    cout<<a<<" = "<<b<<endl;
    if(b==a)cout<<"palindrome";
    return 0;
}
// int main()
// {
// 	string str="MADAM";
// 	string rev="";
// 	int len=(int)str.length();
// 	rev.resize(len);
// 	for(int i=0;j=len-1;i<len;i++;j--)
// 	{
// 		rev[i]=str[j];
// 	}
// 	rev[len]='\0';	
// 	if(str.compare(rev)==0)
// 		cout<<"palindrome"<<endl;
// 	else
// 		cout<<"not a pallindrome"<<endl;
// 	return 0;
// }