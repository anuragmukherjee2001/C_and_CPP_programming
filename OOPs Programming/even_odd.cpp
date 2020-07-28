#include<iostream>

using namespace std;
class eve
{
	public:
		int num;
		void input()
		{
			cout<<"Enter the number";
			cin>>num;
			if(num%2==0)
			{
				cout<<"Even number";
				cout<<endl;
			}
			else
			cout<<"odd number";
			cout<<endl;
			
		}
};
int main()
{
	eve e;
	e.input();
	return 0;
}


