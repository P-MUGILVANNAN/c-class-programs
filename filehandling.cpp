#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("file1.txt");
    string name = "Mugil";
    int age = 25;
    file<<"Name: "<<name<<endl;
    file<<"Age: "<<age<<endl;
    file.close();
    return 0;
}

