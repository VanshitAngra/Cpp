#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;

    char o;
    cout<<"Enter the operation"<<endl;
    cin>>o;
    switch (o)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
         break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    default:
    cout<<"you entered wrong operation";
        break;
    }
    return 0;
}