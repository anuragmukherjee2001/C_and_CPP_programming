#include<iostream>
using namespace std;

class cone
{
	private:
		double radius;
		double height;
		
	public:
		cone(double r,double h)
		{
			radius=r;
			height = h;
		}
		double volume()
		{
			return 0.33*3.14*radius*radius*height;
		}
		
};

int main()
{
	cone cone1(2.0,3.3);
	cone cone2(3.1,1.2);
	
	cone *ptr;
	
	ptr = &cone1;
	cout<<ptr->volume();
	
	cout<<endl;
	
	ptr = &cone2;
	cout<<ptr->volume();
	
	return 0;
}
