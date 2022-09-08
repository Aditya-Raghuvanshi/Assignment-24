/*Define a function to check whether a given number is a term in a Fibonacci series or
not.*/
#include<iostream>
using namespace std;

void fib(int );
int main()
{
    int n;
    cout<<"Enter any number ";
    cin>>n;
    fib(n);
    return 0;
}
void fib(int n)
{
    int x=0,y=1,z,i;
    if(n==x)
    {
        cout<<"number found and it is at the 1 place in fib sequence ";
    }
    else if(n==y)
    {
         cout<<"number found and it is at the 2 place in fib sequence ";
    }
    else{
    for(i=3;z<=n;i++)
    {
        z=x+y;
        if(z==n)
        {
            cout<<"number found and it is at the "<<i<<" place in fib sequence ";
            break;
        }
        x=y;
        y=z;
    }
    if(z>n)
    {
        cout<<"Number not found ";
    }
    }
   
}