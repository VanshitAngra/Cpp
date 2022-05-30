#include <iostream>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a+=1;
        }
    }
    if(a==0)
    {
        cout<<n<<" is a prime number";
    }
    else
    {
        cout<<n<<" is not a prime number";
    }
}