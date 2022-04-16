#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    int rollno;
    string name;
    int pmarks;
    int cmarks;
    int mmarks;

    public:
    Student(int r,string n,int p,int c, int m)
    {
        rollno=r;
        name=n;
        pmarks=p;
        cmarks=c;
        mmarks=m;
    }
    int totalmarks()
    {
        return pmarks+mmarks+cmarks;
    }
    float avg()
    {
        return totalmarks()/(float)3;
    }
    char grade()
    {
        if (avg()<40)return 'C';
        else if (avg()>=40&&avg()<60)return 'B';
        else return 'A';
    }
};
int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter Roll Number of a Student: "<<endl;
    cin>>roll;
    cout<<"Enter Name of a Student:"<<endl;
    cin>>name;
    cout<<"Enter Marks in 3 Subjects"<<endl;
    cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
        
    cout<<"Total Marks:"<<s.totalmarks()<<endl;
    cout<<"Grade of Student:"<<s.grade()<<endl;
    return 0;
}