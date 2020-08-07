#include<iostream>
using namespace std;

class leapyear
{
	public:
	int y;
	void input()
	{
		cout<<"enter a year ";
		cin>>y;
		cout<<endl;
		if(y%4 == 0)
		{
			if(y%100 == 0)
			{
				if(y%400 == 0)
				{
					cout<<"it is a leap year"<<endl;
				}
				else
				{
					cout<<"it is not a leap year"<<endl;
				}
			}
			else
			{
				cout<<"it is a leap year"<<endl;
			}
		}
		else
		{
			cout<<"it is not a leap year"<<endl;	
		}	
	}	
};

int main()
{
	leapyear lp;
	lp.input();
}
