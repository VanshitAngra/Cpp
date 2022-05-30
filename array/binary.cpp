#include <iostream>
using namespace std;

int bin(int arr[],int n,int x)
{
    int lb=0,ub=n,mid;
    
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


int main()
{
    int size,arr[100],x;

    cout<<"enter the size of the array "<<endl;
    cin>>size;

    cout<<"enter the elements of array "<<endl;

for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
cout<<endl<<"enter the element to find in the array "<<endl;
cin>>x;

cout<< "element is present at "<<bin(arr,size,x)<<" index ";
}