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
    t1.join();
    return 0;
}




