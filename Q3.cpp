// A program to Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.

#include<iostream>
using namespace std;
class carpark
{
    private:
    int car_id;
    int chargeperhr;
    float parkedTime;

    public:
    void read_data(int a, int b, float c)
    {
        car_id=a;
        chargeperhr=b;
        parkedTime=c;
    }
    float net_charge()
    {
        return chargeperhr*parkedTime;
    }
    void display_data()
    {
        cout<<"Car id:"<<car_id<<endl;
        cout<<"Charge per Hour:"<<chargeperhr<<endl;
        cout<<"Parked time:"<<parkedTime<<endl;

        float d;
        d=net_charge();
        cout<<"Net payment is:"<<d<<endl;
    }

};

int main()
{
    carpark c1,c2;
    c1.read_data(4455,500,2);
    c2.read_data(2234,500,3);
    c1.display_data();
    c2.display_data();
    return 0;

}