#include <iostream>
using namespace std;
int set(int n)
{
    int ans=0,r;
    while(n!=0)
    {
        r=n%2;
        if(r==1){
        ans+=1;}
        n=n/2;
    }
    return ans;
}

int count(int a,int b)
{
    int ans1= set(a);
    int ans2= set(b);

    return ans1+ans2;
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"answer is "<<count(a,b);

}