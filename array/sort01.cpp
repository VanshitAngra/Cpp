#include <iostream>
#include <array>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort(int arr[],int n)
{
    int i=0,j=n-1,arr1[100];
   while(i<j)
   {
       while(arr[i]==0 && i<j)
       {
           i++;
       }
       while(arr[j]==1 && i<j)
       {
           j--;
       }
       //after completeing above step
       if(arr[i]==1 && arr[j]==0 && i<j)
       {
            swap(arr[i],arr[j]);
            i++;
            j--;
       } 
   }

}

int main()
{
    int n,arr[100];
    cout<<"enter the length of the array "<<endl;
    cin>>n;
    cout<<"enter the elements of the arrays "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    print(arr,n);

}