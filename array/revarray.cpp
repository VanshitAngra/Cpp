#include <iostream>
using namespace std;
void rev(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<=end)
    {   swap(arr[start],arr[end]);
        start++;end--;
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

   rev(arr,size);
   print(arr,size);
}