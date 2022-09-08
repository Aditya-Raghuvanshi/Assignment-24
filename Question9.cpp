/*Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
#include<iostream>
using namespace std;

void max(int ,int );
void max(float ,float );
int main ()
{
    float a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    max(a,b);
}
void max(int a,int b)
{
    if(a>b)
        cout<<a<<" is greater than "<<b;
    else{
        cout<<b<<" is greater than "<<a;
    }    
}
void max(float a,float b)
{
    if(a>b)
        cout<<a<<" is greater than "<<b;
    else{
        cout<<b<<" is greater than "<<a;
    }    
}