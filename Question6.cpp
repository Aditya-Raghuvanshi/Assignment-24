//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;

void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"You entered a="<<a<<" and b="<<b;
    swap(a,b);
    cout<<endl<<"After swapping a="<<a<<" And b="<<b;
    return 0;
}
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}