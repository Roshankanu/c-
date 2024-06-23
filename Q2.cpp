///Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.

#include<iostream>
using namespace std;
class primeNumber
{
    private:
    int num;

    public:
    void read_data(int n)
    {
        num=n;
    }

    int isprime()
    {
        if(num<=1)
        return false;

        for(int i=2;i<num;i++)
        {
            if(num%i ==0)
            return false;
        }
        return true;
    }

};
int main()
{
    primeNumber p;
    int n;
    char response;

    do
    {
        cout<<"Enter a number:";
        cin>>n;

        p.read_data(n);

        if(p.isprime())
        cout<<n <<" is a prime number."<<endl;
        else
        cout<<n <<" "<<"is not a prime number."<<endl;

        cout<<"Do you want to check another number(y/n):";
        cin>>response;


    } while (response == 'y' || response == 'Y');

    return 0;
    

}
