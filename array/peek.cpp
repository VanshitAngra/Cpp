#include <iostream>
using namespace std;

int peak(int arr[],int n)
{
    int s=0,e=n-1,mid;
    mid=s + (e-s)/2;

    while (s<e)
    {
        if(arr[mid] < arr[mid+1])
        {
            s=mid+1;
        }
        else 
        {
            e=mid;
        }
        mid=s + (e-s)/2;       
    }
     return arr[s];
}

int main()
{
    int s,arr[100];
    cout<<"enter the size of the array "<<endl;
    cin>>s;
    cout<<"enter the elements of arrays "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<< peak(arr,s);
}