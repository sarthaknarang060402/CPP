#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[20]="x=10;y=15;z=11";
    char *token=strtok(s,"=;");
    while(token!=NULL){cout<<token<<endl;token=strtok(NULL,"=;");}
    char s1[20]="good";
    char s2[20]="morning";
    char s3[20]="";
    char s4[20]="";
    char s5[20]="235";
    char s6[20]="54.21";
    cout<<strlen(s1)<<endl;
    cout<<strcat(s1,s2)<<endl;
    cout<<strncat(s1,s2,5)<<endl;
    cout<<strcpy(s3,s1)<<endl;
    cout<<strncpy(s4,s2,5)<<endl;
    //cout<<s1<<" "<<s2<<endl;
    cout<<strstr(s1,s2)<<endl;
    cout<<strchr(s1,'o')<<endl;
    cout<<strrchr(s1,'o')<<endl;
    cout<<strcmp(s1,"Good")<<endl;//good>Good so 32 //vscode gives 1
    cout<<strtol(s5,NULL,10)<<endl;
    cout<<strtof(s6,NULL)<<endl;
    return 0;
}