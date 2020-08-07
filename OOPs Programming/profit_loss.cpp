#include<iostream>

using namespace std;

class profit
{
	public:
	int cp,sp,total;
	void input()
	{
		cout<<"enter the cost price";
		cout<<endl;
		cin>>cp;
		cout<<"enter the sell price";
		cin>>sp;
		cout<<endl;
		total = sp-cp;
		if(total < 0)
		{
			cout<<"suffered a loss";
			cout<<endl;
			cout<<"the loss is"<<-(total);
				
		}	
		else
		{
			cout<<"Profit made";
			cout<<endl;
			cout<<"the profit is"<<total;
			
		}
	}	
};
	int main()
	{
		profit p;
		p.input();
	}
