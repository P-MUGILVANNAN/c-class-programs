#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("file1.txt",ios::app);
    string course = "Python";
    file<<"Course: "<<course<<endl;
    file.close();
    return 0;
}


