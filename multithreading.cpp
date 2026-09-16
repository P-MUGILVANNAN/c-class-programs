#include<iostream>
#include<thread>
using namespace std;

void display()
{
    cout<<"Thread running!"<<endl;
}

int main()
{
    thread t1(display);
    thread t2(display);
    t1.join();
    t2.join();
    return 0;
}




