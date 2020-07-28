#include<iostream>
using namespace std;

class circle
{
	private:
		double radius;
		
	public:
		circle(int r = 2.0)
		{
			radius=r;
		}	
		double area()
		{
			return 2*3.14*radius;
		}		
};

int main()
{
	circle circle1(3);
	circle circle2(4);
	
	circle *ptr;
	cout<<"the area of the first circle is ";
	
	ptr = &circle1;
	cout<<ptr->area();
	cout<<endl;
	
	cout<<"the area of the second circle is ";
	
	ptr  = &circle2;
	cout<<ptr->area();
	
	return 0;
}
