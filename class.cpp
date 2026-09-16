#include<iostream>
#include<string>
using namespace std;

class Car
{
public:
    // state
    string carName;
    string color = "Black";
    int price = 3000000;
    string fuel = "Diesel";

    // methods
    void start()
    {
        cout<<this->carName<<" "<<"Car started"<<endl;
    }
    void accelerate()
    {
        cout<<"Car accelerated"<<endl;
    }
    void brake();
};

void Car::brake()
{
    cout<<"Car stopped"<<endl;
}

int main()
{
    Car bmw;
    bmw.carName = "BMW X7";
    cout<<bmw.carName<<endl;
    cout<<bmw.color<<endl;
    cout<<bmw.price<<endl;
    cout<<bmw.fuel<<endl;
    bmw.start();
    bmw.accelerate();
    bmw.brake();
    return 0;
}
