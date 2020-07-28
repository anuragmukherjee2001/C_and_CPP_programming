#include<iostream>

using namespace std;

class age
{
	public:
	int age1,age2,age3,min;
	void input()
	{
		cout<<"enter the age age of Ram";
		cin>>age1;
		cout<<endl;
		cout<<"enter the age age of Salubh";
		cin>>age2;
		cout<<endl;
		cout<<"enter the age age of Ajay";
		cin>>age3;
		cout<<endl;
		if(age1<age2 && age1 < age3)
		{
			cout<<"Ram is youngest"<<age1;
		}
		else if(age2 < age1 && age2 < age3)
		cout<<"Salubh is youngest"<<age2;
		else
		cout<<"Ajay is youngest"<<age3;
	}
};
int main()
{
	age ag;
	ag.input();
}

