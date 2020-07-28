#include<iostream>

using namespace std;

class cube
{
	private:
		double side;
		
	public:
		cube(double s)
		{
			side = s;
		}	
		
		double volume()
		{
			return side*side*side;
		}
};

int main()
{
	cube cube1(2);
	cube cube2(3);
	
	cube *ptr;
	
	ptr = &cube1;
	cout<<ptr->volume();
	
	cout<<endl;
	
	ptr = &cube2;
	cout<<ptr->volume();
	
	return 0;
}
