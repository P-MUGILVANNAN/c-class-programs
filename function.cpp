#include<iostream>
using namespace std;

void welcome()
{
    cout<<"Welcome to Function!"<<endl;
}

void greet();

int add(int a,int b)
{
    return a+b; // 15
}

void sub(int a,int b)
{
    cout<<a-b<<endl;
}

int mul()
{
    int a = 10;
    int b = 2;
    return a*b; // 20
}

int div(int& n)
{
    return n = 100;
}

void swapVariable(int& a,int& b)
{
    int c = a;
    a = b;
    b = c;
}

void displayArray(const int num[],int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + num[i];
    }
    cout<<sum<<endl;
}

int f1(int a = 10)
{
    return a;
}

int main()
{
    welcome(); // function call
    welcome();
    greet();
    int result = add(10,5);
    cout<<result<<endl;
    sub(10,5);
    sub(20,5);
    int result1 = mul();
    cout<<result1<<endl;

    int x = 10;
    div(x);
    cout<<x<<endl;

    int a = 10;
    int b = 20;
    swapVariable(a,b);
    cout<<a<<" "<<b<<endl;


    int numbers[5] = {1,2,3,4,5};
    displayArray(numbers,5);

    cout<<f1()<<endl;
    cout<<f1(5)<<endl;
    return 0;
}

void greet(){
    cout<<"Hi"<<endl;
}
