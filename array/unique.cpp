//in an array of length (2m+1) find the unique number

#include <iostream>
using namespace std;
int unique(int arr[],int n)
{
    int c=0;   
    for(int i=0;i<n;i++)
    {
        c=c^arr[i];
    } 
    return c;
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
   cout << unique(arr,size) <<"is a unique number ";

}