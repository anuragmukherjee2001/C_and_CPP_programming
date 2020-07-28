#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
class Student
{
	public:
		int code;
		char sname[40];
		int age;
		void GetStudent();
		void ShowStudent();
		
};

void Student::GetStudent()
{
	cout<<"code="<<endl;
	cin>>code;
	cout<<"name"<<endl;
	cin>>sname;
	cout<<"age"<<endl;
	cin>>age;
	
}
void Student::ShowStudent()
{
	cout<<"the code of the student is"<<code<<endl;
	cout<<"the name of the student is"<<sname<<endl;
	cout<<"the age of the student is"<<age<<endl;
}
int main()
{
	Student st;
	st.GetStudent();
	st.ShowStudent();
	return 0;
}
