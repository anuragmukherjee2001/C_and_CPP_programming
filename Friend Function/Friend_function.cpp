#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Bank
{
	private:
	char ac_holder[40];
	char ac_type[40];
	double amt,ac_amt,dip_amt,tr_amt;
	public:
			Bank() //Default constructor
			{
				strcpy(ac_holder,"Joy");
				strcpy(ac_type,"Savings");
				amt = 5000.00;
				
			}
			Bank(char *cn,char *atype,double pay)//Overloaded constructor
			{
				strcpy(ac_holder,cn);
				strcpy(ac_type,atype);
				amt = pay;
			}
			
		
			friend void ShowStatus(Bank);
			friend void FinalStatus(Bank);
			void diposit();
			void withdraw();
			
};

	void Bank::diposit()
			{
				cout<<"Enter the amount of diposit";
				cin>>dip_amt;
				amt = dip_amt+amt;
				cout<<"the final amount is"<<amt;
			}
	void Bank::withdraw()
			{
				cout<<"Enter the amount of withdraw";
				cin>>tr_amt;
				amt = amt - tr_amt;
				cout<<"the final amount is"<<amt;
			}

			
void ShowStatus(Bank b)
{
	cout<<"Account Details"<<endl;
	cout<<"name"<<b.ac_holder<<"\t Account type="<<b.ac_type;
	cout<<"balance="<<b.amt<<endl;
	
}
void FinalStatus(Bank c)
{
	
	cout<<"Final amount after transtions";
	cout<<c.amt;
}
int main()
{
	int ans;
	Bank ob;
	ShowStatus(ob);
//	Bank axis("Souvik","Recurring",8000.00);
//	ShowStatus(axis);

	cout<<"enter your choice"<<endl;
	cout<<"1.withdraw 2.Diposit"<<endl;
	
	cin>>ans;
	switch(ans)
	{
		case 1:
		void withdraw();
		break;
			
		case 2:
		void diposit();
		break;	
	}
	
	Bank(obj);	
	FinalStatus(obj);
	return 0;
}
