#include<iostream>
using namespace std;
int main()
{
    int i;
    int *ptr;
    int a[]={1,2,3,4,5,6,7};
    for(i=0;i<=6;i++)
    {
    ptr=&a[i];
    cout<<*ptr<<" ";
    }

}