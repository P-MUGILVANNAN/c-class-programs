#include<iostream>
#include<string>
using namespace std;


int main()
{
    string name;
    string a = "Hello";
    string b = "Rohit";
    string c = a + " " + b;
    getline(cin,name);
    name[0] = 'm';
    cout<<name<<endl;
    cout<<name[0]<<endl;
    cout<<name.at(1)<<endl;
    cout<<c<<endl;
    cout<<c.length()<<endl;

    string x = "C++ Programming";
    cout<<x.substr(4,11)<<endl;
    return 0;
}

