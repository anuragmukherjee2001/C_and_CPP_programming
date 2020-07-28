#include<iostream>

using namespace std;

class triangle
{
	public:
	int s1,s2,s3,total;
	void input()
	{
		cout<<"enter the first angle";
		cin>>s1;
		cout<<endl;	
		cout<<"enter the second angle";
		cin>>s2;
		cout<<endl;	
		cout<<"enter the third angle";
		cin>>s3;
		cout<<endl;
		total = s1+s2+s3;
		if(total == 180)
		{
			cout<<"the triangle is valid";	
		}	
		else
		cout<<"the triangle is not valid";
	}	
};

int main()
{
	triangle tr;
	tr.input();
}
