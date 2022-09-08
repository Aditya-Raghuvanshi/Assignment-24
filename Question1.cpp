//Define a function to check whether a given number is a Prime number or not.
#include<iostream>

void check_prime(int );
int main()
{
    int n;
    std::cout<<"Enter any number ";
    std::cin>>n;
    check_prime(n);
    return 0;
}
void check_prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            std::cout<<n<<" is not prime number ";
            break;
        }
    }
    if(i==n)
    {
        std::cout<<n<<" is a prime number ";
    }
}