//Given an array of integers nums, calculate the pivot index of this array.
//The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
//If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
//Return the leftmost pivot index. If no such index exists, return -1.

//Input: nums = [1,7,3,6,5,6]
//Output: 3
//Explanation:
//The pivot index is 3.
//Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
//Right sum = nums[4] + nums[5] = 5 + 6 = 11
//Example 2:
//Input: nums = [1,2,3]
//Output: -1
//Explanation:
//There is no index that satisfies the conditions in the problem statement.

#include <iostream>
using namespace std;

int pivot(int arr[],int n)
{
    int sum=0,lsum=0,rsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    lsum=sum;
    for(int i=0;i<n;i++)
    {
        lsum-=arr[i];
        if(lsum == rsum)
        {
            return i;
        }
        rsum+=arr[i];
    }
    return -1;
}
int main()
{
    int size,arr[100];
    cout<<"enter the size of array "<<endl;
    cin>>size;

    cout<<"enter the elements of the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"element is at index "<<pivot(arr,size);
}



