//a program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.

#include<iostream>
using namespace std;
class celsius
{
    private:
    float temp;

    public:
    void setTemp(float t)
    {
        temp=t;
    }
    float tofahrenheit()
    {
        return((temp*9/5)+32);
    }
};
class fahrenheit
{
    private:
    float temp;

    public:
    void setTemp(float t)
    {
        temp=t;
    }
    float tocelsius()
    {
        return ((temp-32)/9*5);
    }
};
int main()
{
    celsius c;
    fahrenheit f;
    float temp;
    int choice;
    cout<<"Enter the temperature:";
    cin>>temp;
    cout<<"Press 1 if you want to change the temperature in celsius and  Press 2 if you want to change temperature in fahrenheit";
    cin>>choice;
    if(choice ==1)
    {
        f.setTemp(temp);
        cout<<"The temperature in celsius is:"<<f.tocelsius()<<endl;
    }
    else if(choice==2)
    {
        c.setTemp(temp);
        cout<<"The temperature in fahrenheit is:"<<c.tofahrenheit ()<<endl;
    }

    else
    {
        cout<<"Invalid choice!!!!!";
    }
    return 0;
}