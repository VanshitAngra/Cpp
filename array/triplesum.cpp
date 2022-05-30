#include <iostream>
using namespace std;
void sum(int arr[],int n,int s)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=i+2;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k] ==s)
                {
                    cout<<arr[i]<<" "<< arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}

int main()
{
    int n,arr[100],s;
    cout<<"Enter the length of array "<<endl;
    cin>>n;
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element of which we have to find sum "<<endl;
    cin>>s;

    sum(arr,n,s);


}