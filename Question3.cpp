//Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;

void pow(int , int );
int main()
{
    int x,y;
    cout<<"To calculate x raised to the power y enter x and y resp. ";
    cin>>x>>y;
    pow(x,y);
    return 0;
}
void pow(int n, int m)
{
    int i,j=1;
    for(i=1;i<=m;i++)
    {
        j=j*n;
    }
    cout<<n<<" raised to power "<<m<<" is equal to "<<j;
}