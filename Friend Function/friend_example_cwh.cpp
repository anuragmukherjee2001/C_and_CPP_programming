#include <iostream>
using namespace std;

class C2;

class C1
{

    int val1;

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }

    friend void swap(C1 &, C2 &);
};

class C2
{

    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }

    friend void swap(C1 &, C2 &);
};

void swap(C1 &x, C2 &y)
{

    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{

    C1 oc1;

    C2 oc2;

    oc1.indata(37);
    oc2.indata(67);

    swap(oc1, oc2);

    cout << "The value of c1 after exchanging is ";
    oc1.display();
    cout << endl;

    cout << "The value of c2 after exchanging is ";
    oc2.display();
    cout << endl;

    return 0;
}