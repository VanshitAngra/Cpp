//given an array of length n elements from (1,n) and each element appears once or twice return array of all elements that appears twice
#include <iostream>
#include <array>
using namespace std;

void dup(int arr[],int arrn[],int n)
{
    int b=0;
    for(int i=0;i<n;i++)
    {
        int a=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            a+=1;
        }
        if(a==2){
        arr[b]=arr[i];
        b++;
        }
    }
}
void print(int arrn[])
{
    for(int i=0;i<arrn.size(); i++) 
    {
        cout<< arrn[i];
    }
}

int  main()
{
    int size;
    cin>>size;

    int arr[100],arrn[100];

    for(int i=0;i<size;i++)
    {
        cin>> arr[i];
    }
    dup(arr,arrn,size);
    print(arrn);


}