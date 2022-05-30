//pivot in an array 
#include <iostream>
using namespace std;

int pivot(int arr[],int n)
{
    int s=0,e=n,mid;
    mid=s+ (e-s)/2;
    while(s < e-1)
    {
        if(arr[mid] >=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+ (e-s)/2;
    }
    return s;
}

int main()
{
    int size,arr[100];
    cout<<"enter the size of array "<<endl;
    cin>>size;

    cout<<"enter the elements of the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"element is at index "<<pivot(arr,size);
}