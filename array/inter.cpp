//intersection of array (means common element in the array )

#include <iostream>
using namespace std;
void intersection(int arr1[],int n,int arr2[],int m)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            if(arr1[i]<arr2[j])
            break;
            
            if(arr1[i]==arr2[j])
            {
                cout<< arr2[j]<<"  ";
                break;
            }
        }
    }
}    

int main()
{
    int n,m,arr1[100],arr2[100];
    cout<<"enter the length of 1st array "<<endl;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the length of 2nd array "<<endl;
    cin>>m;
    for(int j=0;j<m;j++)
    {
        cin>>arr2[j];
    }

     intersection(arr1,n,arr2,m);

}