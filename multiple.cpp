#include<iostream>
using namespace std;

class Father{
public:
    void fatherSkill()
    {
        cout<<"Driving.."<<endl;
    }
};

class Mother{
public:
    void motherSkill()
    {
        cout<<"Cooking.."<<endl;
    }
};

class Child : public Father,public Mother{
public:
    void childSkill()
    {
        cout<<"Studying.."<<endl;
    }
};

int main()
{
    Child c1;
    c1.fatherSkill();
    c1.motherSkill();
    c1.childSkill();
    return 0;
}


