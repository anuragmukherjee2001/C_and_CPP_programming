#include<iostream>

using namespace std;

class price
{
	public:
	double quan,p,tot;	
	void total()
	{
		cout<<"enter the quantity";
		cout<<endl;
		cin>>quan;
		cout<<endl;
		cout<<"enter the price";
		cin>>p;
		tot = p*quan;
		if(tot > 5000)
		{
			tot = (10/100)*tot;
			cout<<"price is"<<tot;
			cout<<endl;	
		}	
		else
		{
			cout<<"price is"<<tot;
			cout<<endl;
		}
	}	
};
int main()
{
	price pr;
	pr.total();
	
}
