#include <iostream>
using namespace std;

class Employee
{

    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of the employee ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "The Id of the employee is " << id << endl;
    }
};

int main()
{
    // Employee Anurag, Raj, Joy;
    // Anurag.setId();
    // Anurag.getId();

    Employee xb[4];
    for (int i = 0; i < 4; i++)
    {
        xb[i].setId();
        xb[i].getId();
    }

    return 0;
}