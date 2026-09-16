#include<iostream>
#include<string>
using namespace std;

int add(int a,int b){
    return a+b;
}

int add(int x,int y,int z)
{
    return x+y+z;
}

int main()
{
    cout<<add(10,5)<<endl;
    cout<<add(10,4,5)<<endl;
    return 0;
}

