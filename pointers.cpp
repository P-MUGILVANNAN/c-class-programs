#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int a = 100;
    int* p = &a;
    int** dp = &p;
    *p= 50;
    int arr[] = {10,20,30};
    int* arrptr = arr;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<dp<<endl;
    cout<<arrptr<<endl;
    cout<<*arrptr<<endl;
    arrptr++;
    cout<<*arrptr<<endl;
    return 0;
}


