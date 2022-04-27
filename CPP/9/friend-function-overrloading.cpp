#include<iostream>
using namespace std;

class complex
{
    public:
    int real;
    int img;
    friend complex operator+(complex c1,complex c2);
};
complex operator+(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.real=5;
    c1.img=3;
    c2.real=10;
    c2.img=5;
    c3=c1+c2;//calling addition with +
    cout<<c3.real<<"+i"<<c3.img<<endl;
    return 0;
}