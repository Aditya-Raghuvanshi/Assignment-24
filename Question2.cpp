//Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;

void highest_digit(int );
int main()
{

    int n;
    cout<<"Enter any number ";
    cin>>n;
    highest_digit(n);
    return 0;
}
void highest_digit(int n)
{
    int high=n%10,r;
    while(n!=0)
    {
        r=n%10;
        if(high<r)
            high=r;
        n=n/10;    
    }
    cout<<"highest value digit in given number is "<<high;
    
}