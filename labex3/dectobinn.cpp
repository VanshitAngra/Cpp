#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,r,num=0,i=0;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        if(r==1)
        {
            num=(r*pow(2,i))+num;
        }
        n=n/10;
        i++;
    }
    cout<<num;
}