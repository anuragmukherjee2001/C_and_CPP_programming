#include<iostream>
using namespace std;

int main()
{
	int x,i;
	int *ptr;
	
	cout<<"enter the size of the array";
	cin>>x;
	
	ptr = new int[x];
	cout<<"enter the elements";
	for(i=0;i<x;i++)
	{
		cin>>ptr[i];
	}
	cout<<"the values of the array are ";
	for(i=0;i<x;i++)
	{
		cout<<ptr[i];
		cout<<" ";
	}
	cout<<endl;
	delete ptr;
	cout<<"the elements got deleted";
	return 0;
}
