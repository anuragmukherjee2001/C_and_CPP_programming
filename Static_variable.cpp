#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "tiis is Employee " << id << " and this is employee number " << count<<endl;
    }

    static void getCount(void){

        cout<<"The value of c out is "<<count<<endl;
    }
};

int Employee::count; //deafault value is 0

int main()
{
    Employee Anurag, Abhik, jay;
    Anurag.setData();
    Anurag.getData();
    Anurag.getCount();

    Abhik.setData();
    Abhik.getData();
    Abhik.getCount();

    jay.setData();
    jay.getData();
    jay.getCount();
    return 0;
}