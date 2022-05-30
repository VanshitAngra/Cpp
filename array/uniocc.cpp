// unique occurance of a number in an array
// 1 2 3 4 3 2 2 1 1 1
//1-4
//2-3 
//3-2
//4-1
//output - true

#include <iostream>
using namespace std;

bool unique(int arr[],int n)
{
    int arrn[100];
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        arrn[]
    }
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

    unique(arr,size);
    
}