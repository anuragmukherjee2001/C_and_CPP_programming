#include<iostream>
using namespace std;

class box
{
	private:
		double length;
		double breadth;
		double height;
		
	public:
		box(double l=2.0, double b = 2.0, double h = 2.0)
		{
			length = l;
			breadth = b;
			height = h;
		}	
		
		double volume()
		{
			return length*breadth*height;
		}
};

int main()
{
	box box1(1.1,5.2,3.3);
	box box2(6.6,2.2,3.4);
	
	box *ptrbox;
	
	ptrbox = &box1;
	cout<<ptrbox->volume()<<endl;
	
	ptrbox = &box2;
	cout<<ptrbox->volume();
	
	return 0;
}
