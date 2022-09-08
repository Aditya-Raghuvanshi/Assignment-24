//Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;

void print_pascal(int );
int fact(int );
int comb(int ,int );
int main()
{
     int n;
     cout<<"Enter the number of lines you want in pascal triangle ";
     cin>>n;
     print_pascal(n);
     return 0;
}
void print_pascal(int n)
{
    int i,j,k,r;
     for(i=1;i<=n;i++)
     {
        r=0;
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i&&k)
            {
                cout<<comb(i-1,r);
                k=0;
                r++;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
     }
}
int comb(int n,int r)
{
    return(fact(n)/fact(n-r)/fact(r));
}
int fact(int n)
{
    int i,f=1;
    for(i=n;i>=1;i--)
    {
         f=f*i;
    }
    return f;
}