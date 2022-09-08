/*Write functions using function overloading to add two numbers having different data
types.*/
#include<iostream>
using namespace std;

void add(int ,int);
void add(float ,float );
int main()
{
    add(2,3);
    add(2.4f,3.5f);
}
void add(int a,int b)
{
    cout<<"sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void add(float a,float b)
{
    cout<<"sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

