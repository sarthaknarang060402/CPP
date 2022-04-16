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
    rectangle r1,r2;   //objects
    r1.length=10;      //for accessing use dot operator but this wont work until that thing is under public
    r1.breadth=5;
    cout<<r1.area()<<endl;
    r2.length=15;
    r2.breadth=10;
    cout<<r2.diagnol()<<endl;
    return 0;
}