#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,ans=0,i=0,r;
    cin>>n;
    while(n>0)
    {
        r=n%2;
        ans=(r*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}