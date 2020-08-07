#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    fstream myFilehandler;

    myFilehandler.open("test.txt");

    if (myFilehandler.is_open())
    {
        cout<<"The file has been opened successfully";

        myFilehandler << "This is my fisrt file program in c++";

        myFilehandler.close();

    }

    else
    {
        cout<<"File open Unsuccessful";
    }
  
    return 0;
}