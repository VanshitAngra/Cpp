//find the first and last occurance of element in an array
// ex 0 1 2 1 2 3 4 5 3 4 0 1 2 3 
//first and last index of array is 
// 0 10

#include<iostream>
using namespace std;

int firstocu(int arr[],int n,int x)
{
    int s=0,e=n-1,mid,ans=-1;
    mid=s+((e-s)/2);

    while(s<=e)
    {
        if(arr[mid] == x){
        ans=mid;
        e=mid-1;
        }
        else if(x > arr[mid])
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;            
        }
        mid=s+((e-s)/2);

    }
    return ans;
}


int lastocu(int arr[],int n,int x)
{
    int s=0,e=n-1,mid,ans=-1;
    mid=s+((e-s)/2);

    while(s<=e)
    {
        if(arr[mid] == x){
        ans=mid;
        s=mid+1;
        }
        else if(x > arr[mid])
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;            
        }
        mid=s+((e-s)/2);

    }
    return ans;
}

int main()
{
    int n,arr[100],x;
    cout<<"enter the length of the array "<<endl;
    cin>>n;

    cout<<"enter the elements of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element of which you want to find first and last index in array "<<endl;
    cin>>x;

    cout<<"first occurance of element is at index "<<firstocu(arr,n,x)<<endl;
    cout<<" last occurance of element is at index "<<lastocu(arr,n,x)<<endl;
}