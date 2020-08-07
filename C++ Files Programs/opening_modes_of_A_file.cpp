#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    fstream file;

    file.open("sample.txt",ios::out | ios::ate | ios::app);

    // Opening modes of files

/*
    ios::in - input - Reading
    ios::out - Output - writing to the file
    ios::trunc - Truncate - it truncating (Cutting everything inside)
    ios::ate - At The End - Set pointer at the end of the file - The place of pointer can be changed, it is possible to read and write in that mode
    ios::app - Append - The content is added at the end of the file (It is not possible to remove content nor adding something in other place than the end of the file)
    ios::binary - It opens the file as a binary file

*/

    // default modes of libraries

/*
    // default mode (Flag)
    // fstream -  ios::out | ios::in
    // ifstream - ios::in
    // ofstream - ios::out

*/

    if (file.is_open())
    {
        file << "Sample Text"<<endl;
        file << "This is my second file program"; 
    }

    else
    {
        cout<<"File open Unsuccessful";
    }
  
    return 0;
}