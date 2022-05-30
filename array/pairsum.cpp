#include <iostream>
using namespace std;
void sum(int arr[],int n,int s)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == s)
            {
                cout<<arr[i]<<"  "<<arr[j]<<endl;
            }
        }
    }
}

int main()
{
    int n,a[100];
    int s;
    cout<<"enter the length of array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to find the sum of ";
    cin>>s;
    sum(a,n,s);
} 