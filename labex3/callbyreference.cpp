#include <iostream>
using namespace std;
void swap(int &n1,int &n2)
{
    int n3;
    n3=n1;
    n1=n2;
    n2=n3;
}
int main()
{
    int a=11,b=12;
    cout<<"Before swapping "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    swap(a,b);

    cout<<"After swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

}