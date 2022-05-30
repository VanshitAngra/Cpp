#include <iostream>
using namespace std;
bool evenodd(int a)
{
    if(a%2==0)
    {return 1;
    }
    return 0;
}
int main()
{
    int a;
    cin>>a;

    if(evenodd(a))
    {
        cout<<"number is even "<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
        
    }
}