#include<iostream>
using namespace std;

class Person{
public:
    void walk()
    {
        cout<<"Walking.."<<endl;
    }
};

class Student : public Person{
public:
    void study()
    {
        cout<<"Studying.."<<endl;
    }
};

int main()
{
    Student s1;
    s1.walk();
    s1.study();
    return 0;
}

