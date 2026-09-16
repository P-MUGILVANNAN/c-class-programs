#include<iostream>
using namespace std;

class Operator{
public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};

int main()
{
    Operator op;
    cout<<op.add(10,5)<<endl;
    cout<<op.add(10,5,6)<<endl;
    return 0;
}
