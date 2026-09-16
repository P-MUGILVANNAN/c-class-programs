#include<iostream>
using namespace std;

class Grandpa{
public:
    void grandpaSkill()
    {
        cout<<"Driving.."<<endl;
    }
};

class Father : public Grandpa{
public:
    void fatherSkill()
    {
        cout<<"Swimming.."<<endl;
    }
};

class Child : public Father{
public:
    void childSkill()
    {
        cout<<"Studying.."<<endl;
    }
};

int main()
{
    Child c1;
    c1.grandpaSkill();
    c1.fatherSkill();
    c1.childSkill();
    return 0;
}



