//difference between product and sum of digits
#include <iostream>
using namespace std;
int main()
{
    int n,r,p=1,s=0;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        p=p*r;
        s=s+r;
        n=n/10;
    }
    cout<<"Difference of digits of number "<<(p-s);
}