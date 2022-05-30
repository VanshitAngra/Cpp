#include <iostream>
using namespace std;

int duplicate(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        c=c^arr[i];
    }
    for(int i=1;i<n;i++)
    {
        c=c^i;
    }
    return c;
}

int main()
{
    int size;
    cin>>size;

    int arr[1000];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout << duplicate(arr,size);
}