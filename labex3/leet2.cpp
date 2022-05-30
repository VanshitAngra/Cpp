#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,r,a,rev=0,s=0,re,i=0;
    cin>>n;
    a=n;
    if(n > INT32_MIN && n < INT32_MAX){
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    cout<<rev<<endl;
    while(a!=0)
    {
        re=a%10;
        s=(re*pow(10,i))+s;
        a=a/10;
        i++;
    }
    cout<<s;
    }
    else{
        cout<<"0";
    }
}