#include <iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size;
    cin>>size;
    int key;
    cout<<"Enter the element you want to find "<<endl;
    cin>>key;

    int arr[100];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bool flag=search(arr,size,key);

    if(flag)
    {
        cout<<"element is present in array "<<endl;
    }
    else{
        cout<<"element is not present in array "<<endl;
    }
}