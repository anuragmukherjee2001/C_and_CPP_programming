#include<iostream>
#include<string.h>

using namespace std;

class student
{
	public:
		int id;
		char sname[30];
		int age;
		
		student()
		{
			id = 2;
			strcpy(sname,"Anurag");
			age = 22;
		}
		
		void GetStudent()
		{
			cout<<"enter the id of the student"<<endl;
			cin>>id;
			cout<<"enter the name of the student"<<endl;
			cin>>sname;
			cout<<"enter the age"<<endl;
			cin>>age;	
		} 
		
		void ShowStudent()
		{
			cout<<"the id of the student is"<<id<<endl;
			cout<<"the name of the student is"<<sname<<endl;
			cout<<"the age of the student is"<<age<<endl;
		}
		
};

class college
{
	public:
	student st;	
		int c_id;
		char name[40];
		char loc[33];
		
	college()
	{
		c_id = 1;
		strcpy(name,"AOT");
		strcpy(loc,"Adisaptagram");	
	}	
		
	void GetCollege()
	{
		cout<<"enter the is of the collage"<<endl;
		cin>>c_id;
		cout<<"enter the name of the college"<<endl;
		cin>>name;
		cout<<"enter the location of the college"<<endl;
		cin>>loc;	
	}	
	
	void ShowCollege()
	{
		cout<<"the id of the college is"<<c_id<<endl;
		cout<<"the name of the college is"<<name<<endl;
		cout<<"the location of the college is"<<loc<<endl;
	}		
};


int main()
{
	college co;
	co.GetCollege();	
	co.ShowCollege();
	co.st.GetStudent();
	co.st.ShowStudent();
	return 0;
}
