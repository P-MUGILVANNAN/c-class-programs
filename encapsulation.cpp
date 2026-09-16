#include<iostream>
using namespace std;

class Locker{
private:
    int amount = 50000;
public:
    void setAmount(int amount)
    {
        this->amount = amount;
    }
    int getAmount()
    {
        return this->amount;
    }
};

int main()
{
    Locker l;
    l.setAmount(20000);
    cout<<l.getAmount()<<endl;
    return 0;
}

