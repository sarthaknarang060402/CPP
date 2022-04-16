#include<iostream>
using namespace std;
    
class Rectangle
{
    private:
	int length;
	int breadth;
	    
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
    // Rectangle()            //non parametrized(initialize with 1s)
	// {
	// 	length=1;
	// 	breadth=1;
	// }
    Rectangle(int l=1,int b=1)//parametrized + non parameterized(initialized with 1s)
	{
		setLength(l);
		setBreadth(b);
	}
    Rectangle(Rectangle &r)//copy constructor
	{
		length=r.length;
		breadth=r.breadth;
	}
    int area()
	{
		return length*breadth;
	}
	
};
    
int main()
{
	Rectangle r1;
    Rectangle r2(10,5);
    Rectangle r3(r2);
	cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.area()<<endl;
	
	return 0;
	    
}