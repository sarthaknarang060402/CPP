#include<iostream>
#include<cmath>
using namespace std;
    
class Rectangle
{
    private:
	int length=0;
	int breadth=0;
	
    public:
	void setLength(int l)
	{
		if(l>=0)length=l;
        else cout<<"enter +ve values"<<endl;
    }
	void setBreadth(int b)
	{
	    if(b>=0)breadth=b;
        else cout<<"enter +ve values"<<endl;
	}
 	int getLength()
    {
	    return length;
	}    
	int getBreadth()
	{
		return breadth;
	}
	int area()
	{
	 	return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
    int diagnol()
    {
        return sqrt(length*length+breadth*breadth);
    }
};
    
int main()
{
	Rectangle r1;
	r1.setLength(10);
	r1.setBreadth(5);
	    
 	cout<<r1.area()<<endl;
	cout<<r1.perimeter()<<endl;
	cout<<r1.getLength()<<endl;
	
}