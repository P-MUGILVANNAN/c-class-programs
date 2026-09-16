#include<iostream>
#include<stdexcept>
using namespace std;

class InvalidAge : public exception{
public:
    const char* what() const noexcept override
    {
        return "Age must be greater 0";
    }
};

int main()
{
    cout<<"Hello"<<endl;
    int a = 10;
    int b = 0;
    try{
        if(b==0){
            throw "Division by Zero";
        }
        cout<< a/b<<endl;
    }
    catch(...)
    {
        cout<<"Unknown"<<endl;
    }
    try{
        throw InvalidAge();
    }
    catch(exception& message)
    {
        cout<<"Exception: "<<message.what()<<endl;
    }
    cout<<"Program executed successfully"<<endl;
    return 0;
}

