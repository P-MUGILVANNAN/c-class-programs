#include<iostream>
using namespace std;

class Java{
public:
    virtual void level() final
    {
        cout<<"Hard"<<endl;
    }
};

class JavaScript:public Java{
public:
    void level() override
    {
        cout<<"Easy"<<endl;
    }
};

int main()
{
    Java* j = new JavaScript();
    j->level();
    return 0;
}

