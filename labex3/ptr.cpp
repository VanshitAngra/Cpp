#include<iostream>
using namespace std;
int main()
{
    int a;
    a=12;
    int *ptr1,**ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    cout<<**ptr2<<endl;
    cout<<*ptr1;
}