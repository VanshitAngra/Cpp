#include <iostream>
using namespace std;
void swap(int arr[],int n)
{
    for(int i=0;i<n-1;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    swap(arr,size);
    print(arr,size);
}