#include<iostream>
using namespace std;
class rational
{
    private:
    int num;
    int den;
    public:
    rational(int p=1,int q=1)
    {
        num=p;
        den=q;
    }
    rational(rational &r)
    {
        num=r.num;
        den=r.den;
    }
    int getden()
    {
        return den;
    }
    int getnum()
    {
        return num;
    }
    void setnum(int p)
    {
        num=p;
    }
    void setden(int q)
    {
        den=q;
    }
    rational operator+(rational r)
    {
        rational temp;
        temp.num=num*r.den+den*r.num;
        temp.den=den*r.den;
        return temp;
    }
    friend ostream &operator<<(ostream &os,rational &r);
};

ostream &operator<<(ostream &os,rational &r)
{
    os<<r.num<<"/"<<r.den;
    return os;
}
int main()
{
    rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout<<r3;
    return 0;
}