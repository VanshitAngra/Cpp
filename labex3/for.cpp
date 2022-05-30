#include <iostream>
using namespace std;
int main()
{
    //fibonacci series 
    int a=0,b=1,c=0,n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for (int i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}