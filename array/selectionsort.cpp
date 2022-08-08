#include <iostream>
using namespace std;

void sort(int arr[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            min=j;
        }
        swap(arr[min],arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n,arr[100];
    cout<<"Enter the length of array "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);


}