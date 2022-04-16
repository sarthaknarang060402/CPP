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
    rectangle *p;
    p=new rectangle;
    //or
    rectangle *q=new rectangle;// or rectangle *q=new rectangle();
    p->length=15;
    p->breadth=10;
    q->length=15;
    q->breadth=10;
    cout<<p->area()<<" "<<q->diagnol();
    return 0;
}