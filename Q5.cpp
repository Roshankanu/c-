//Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.
//An employee with ... ... ... has received Rs ... ... ...as a bonus

//and

///had worked ... ... ... hours as overtime in the year ... ... ...

#include<iostream>
using namespace std;
class employee
{
    int employe_id;
    float total_bonus;
    float overtime;
    float year;

    public:
    void read_data(int a, float b,float c,float d)
    {
        employe_id=a;
        total_bonus=b;
        overtime=c;
        year=d;
    }

    void display_data()
    {
        cout<<"An employee with employee id "<<employe_id<<" has received Rs "<<total_bonus<<" as a bonus"<<endl;
        cout<<"and"<<endl;
        cout<<"had worked "<<overtime<<" hours as a overtime in a year "<<year<<endl;
    }

};

int main()
{
    int n;
    cout<<"Enter the number of employee:";
    cin>>n;

    employee employees[n];

    for(int i=0;i<n;i++)
    {
        int id;
        float bonus;
        float overtime;
        float year;

        cout<<"Enter employee id:";
        cin>>id;
        cout<<"Enter total bonus:";
        cin>>bonus;
        cout<<"Total overtime:";
        cin>>overtime;
        cout<<"In a particular year:";
        cin>>year;
        employees[i].read_data(id,bonus,overtime,year);

    }
    for(int i=0;i<n;i++)
    employees[i].display_data();

    return 0;
}