#include<iostream>
using namespace std;

void Isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return;
        }
    }
    cout<<n<<" ";
}

int main()
{
    int a=20;
    for(int i=2;i<=a;i++)
    {
        Isprime(i);
    }
    return 0;
}