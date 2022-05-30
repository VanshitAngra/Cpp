#include <iostream>
using namespace std;

void prnt(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
   int arr[10]={0};//only in case of 0 we can initialize whole array 0
   prnt(arr,10);
    
    
}