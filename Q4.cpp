//a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.

#include<iostream>
#include<cmath>
#define pi 3.1415
using namespace std;
class circle
{
    private:
    float r;
    public:
    void read_data(float a)
    {
        r=a;
    }
    float area()
    {
        
        return (pi*r*r);
    }
    float perimeter()
    {
        return 2*pi*r;
    }
};

class rectangle
{
    private:
    float l;
    float b;
    public:
    void read_data(float side1,float side2)
    {
        l=side1;
        b=side2;
    }
    float area()
    {
        return (l*b);
    }
    float perimeter()
    {
        return 2*(l+b);
    }
};
class triangle
{
    private:
    float a;
    float b;
    float c;

    public:

    void read_data(float p,float l,float h)
    {
        a=p;
        b=l;
        c=h;
    }
    float area()
    {
        float s;
        s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    float perimeter()
    {
        return a+b+c;
    }
};

int main()
{
    circle c;
    triangle t;
    rectangle r;
    
    int choice;
    cout<<"Press 1 if you want to calculate area and perimeter of circle or Press 2 to calculate area and perimeter of rectangle or Press 3 to calculate area and perimeter of triangle:";
    cin>>choice;
    if(choice==1)
    {   
        float radius;
        cout<<"Enter the radius of circle:";
        cin>>radius;
        c.read_data(radius);
        cout<<"Area of circle is:"<<c.area()<<endl;
        cout<<"Perimeter of circle is:"<<c.perimeter()<<endl;
    }
    else if(choice==2)
    {
        float l,b;
        cout<<"Enter the length and breadth of rectangle:";
        cin>>l>>b;
        r.read_data(l,b);
        cout<<"The area of rectangle is:"<<r.area()<<endl;
        cout<<"The perimeter of rectangle is:"<<r.perimeter()<<endl;
    }
    else if(choice==3)
    {
        float a,b,c;
        cout<<"Enter the 1st, 2nd and 3rd side of triangle:";
        cin>>a>>b>>c;
        t.read_data(a,b,c);
        cout<<"The area of triangle is:"<<t.area()<<endl;
        cout<<"The perimeter of triangle is:"<<t.perimeter()<<endl;
    }
    else
    cout<<"Invalid choice!!!!";
    return 0;
}