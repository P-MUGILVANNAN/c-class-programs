#include<iostream>
using namespace std;

class Employee{
private:
    int salary;
public:
    Employee()
    {
        salary = 50000;
    }
    friend void display(Employee);
};

void display(Employee e)
{
    cout<<e.salary;
}

int main()
{
    Employee e;
    display(e);
    return 0;
}
