#include<iostream>
#include<cmath>
using namespace std;

class rectangle        //class
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length + breadth);
    }

    int diagnol()
    {
        return sqrt(length*length+breadth*breadth);
    }
};
int main()
{
    rectangle r;
    rectangle *p;
    p=&r;
    r.length=10;
    r.breadth=5;
    cout<<p->area();
    return 0;
}