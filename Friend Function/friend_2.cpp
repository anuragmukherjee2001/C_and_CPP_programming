#include <iostream>
using namespace std;

//forward declaration

class Complex;

class Calculator
{

public:
    int add(int a, int b)
    {

        return a + b;
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{

    int a, b;

    friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex o1, o2;

    o1.setnumber(1, 4);
    o2.setnumber(5, 8);

    Calculator calc;

    int res = calc.sumRealComplex(o1, o2);
    int resc = calc.sumCompComplex(o1, o2);

    cout << "The sum of real part is " << res << endl;
    cout << "The sum of Complex part is " << resc << endl;


    return 0;
}