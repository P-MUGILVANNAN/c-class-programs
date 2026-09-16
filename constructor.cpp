#include<iostream>
#include<string>
using namespace std;

class Car
{
public:
    // state
    string carName;
    string color;
    int price;
    string fuel;

    // constructor
    Car(string carName,string color,int price,string fuel)
    {
        this->carName = carName;
        this->color = color;
        this->price = price;
        this->fuel = fuel;
        cout<<this->carName<<" Car Created"<<endl;
    }

    ~Car()
    {
        cout<<"Object Created and Destroyed"<<endl;
    }

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
    Car bmw("BMW X7","Black",3000000,"Diesel");
    Car audi("Audi","Red",5000000,"Petrol");
    bmw.start();
    audi.start();
    return 0;
}

