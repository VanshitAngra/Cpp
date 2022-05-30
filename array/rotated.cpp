//search in rotated and sorted array 
// Aahad and Harshit always have fun by solving problems. Harshit took a sorted array consisting of distinct integers and rotated it clockwise by an unknown amount. For example, he took a sorted array = [1, 2, 3, 4, 5] and if he rotates it by 2, then the array becomes: [4, 5, 1, 2, 3].
// After rotating a sorted array, Aahad needs to answer Q queries asked by Harshit, each of them is described by one integer Q[i]. which Harshit wanted him to search in the array. For each query, if he found it, he had to shout the index of the number, otherwise, he had to shout -1.
// For each query, you have to complete the given method where 'key' denotes Q[i]. If the key exists in the array, return the index of the 'key', otherwise, return -1.
#include <iostream>
using namespace std;

int pivot(int arr[],int n)
{
    int s=0,e=n-1,mid;
    mid=s+(e-s)/2;

    while(s < e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
         mid=s+(e-s)/2;

    }
    return s;

}
int bin(int arr[],int s,int n,int x)
{
    int lb=s,ub=n,mid;
    
   // mid=(ub+lb)/2;       //in this we can only take upto (2^31)-1 over this it will show error to over come this error we can write formula as 
   mid=lb+((ub-lb)/2);


    while(lb<ub)
    {
         
        if(arr[mid]==x)
        {
            return mid;
        }
         if(x>arr[mid])
        {
            lb=mid+1;
        }
        else 
        {
            ub=mid-1;
        }
       // mid=(ub+lb)/2;
       mid=lb+((ub-lb)/2);
    }
    return -1;
}
int first(int arr[],int size,int k)
{
    int a=0;
    a= pivot(arr,size);
    if(k >=arr[a] && arr[a] < arr[size-1])
    {//binary search on second line 
        return bin(arr, a,size,k);
    }
    else if(k<arr[a] && k>arr[0])
    {
        //binary search on first line 
        return bin(arr,0,a-1,k);
    }
}


int main()
{
    int size,arr[100];
    cout<<"enter the size of the array "<<endl;
    cin>>size;

    cout<<"enter the elements of arrays "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key "<<endl;
    int k;
    cin>>k; 
    pivot(arr,size);
    bin(arr,0,size,k);
    cout<<first(arr,size,k);
    
}