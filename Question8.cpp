/*Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle*/
#include<iostream>
using namespace std;

float area(float );
float area(float ,float );
float area(int ,int );
int main()
{
    float radius,length,breadth;
    int base,height;
    cout<<"Enter radius of the circle ";
    cin>>radius;
    cout<<"Area of the circle is "<<area(radius)<<endl;
    cout<<"Enter length and breadth of the rectangle resp. ";
    cin>>length>>breadth;
    cout<<"Area of the rectangle is "<<area(length,breadth)<<endl;
    cout<<"Enter base and height of the traingle ";
    cin>>base>>height;
    cout<<"Area of the traingle is "<<area(base,height);
    return 0;

}
float area(float r)
{
    return(3.14*r*r);
}
float area(float l,float b)
{
    return(l*b);
}
float area(int b,int h)
{
    return(b*h/2.0);
}