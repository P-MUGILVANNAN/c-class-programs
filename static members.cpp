#include<iostream>
using namespace std;

class Student{
public:
    static int count;

    Student()
    {
        count ++;
    }

    static void showCount()
    {
        cout<<count<<endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    // cout<<Student::count<<endl;
    // cout<<s1.count<<endl;
    Student::showCount();
    return 0;
}
