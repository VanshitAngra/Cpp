#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r)
{
    int num=factorial(n);
    int den=factorial(r) * factorial(n-r);
     return (num/den);
   
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<"Answer is "<< ncr(n,r);

} 