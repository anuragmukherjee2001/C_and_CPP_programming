#include<iostream>

using namespace std;

class matrix
{
	public:
		int a[50][50];
		int b[50][50];
		int c[50][50];
		int i;
		int j;
		int r;
		int x;
		
		void getmatrix()
		{
			cout<<"enter the number of rows";
			cin>>r;
			cout<<"enter the number of columns";
			cin>>x;
			cout<<"enter the elements of the first matrix";
			for(i=0;i<r;i++)
			{
				for(j=0;j<x;j++)
				{
					cin>>a[i][j];
				}
			}
			cout<<"enter the elements of the second matrix";
			for(i=0;i<r;i++)
			{
				for(j=0;j<x;j++)
				{
					cin>>b[i][j];
				}
			}
		}
		
		void showmatrix()
		{
			cout<<"The first matrix is";                   
			for(i=0;i<r;i++)
			{
				for(j=0;j<x;j++)
				{
					cout<<a[i][j]<<" ";
				}
			}
			cout<<endl;
			cout<<"the second matrix is";
			for(i=0;i<r;i++)
			{
				for(j=0;j<x;j++)
				{
					cout<<b[i][j]<<" ";
				}
			}
			cout<<endl;
		}
			void addmatrix()
			{
				for(i=0;i<r;i++)
				{
					for(j=0;j<x;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}
				}
			}
			
			void showresult()
			{
				cout<<"the resultant matrix is";
				for(i=0;i<r;i++)
				{
					for(j=0;j<x;j++)
					{
						cout<<c[i][j]<<" ";
					}
				}
			}
		
};

int main()
{
	matrix m;
	m.getmatrix();
	m.showmatrix();
	m.addmatrix();
	m.showresult();
}
