#include<iostream>

using namespace std;

class absolute
{
	public:
		int num;
		void input()
		{
		
		cout<<"enter the number";
		cout<<endl;
		cin>>num;
		if(num>0)
		{
			cout<<"the number is"<<num;
			cout<<endl;
		}
		else
		{
			cout<<"the number is"<<-(num);
			cout<<endl;
		}
	}
};
int main()
{
	absolute ab;
	ab.input();
}
