#include <iostream>
using namespace std;
bool isprime(int n)
{
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        return 0;
        }
    }
    return 1;


}
 
int main()
{
    int n;
    cin>>n;

    if(isprime(n)){
        cout<<"is a prime number";
    }
    else
    cout<<"not a prime number";
}