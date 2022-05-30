//
//  main.cpp
//  searching
//
//  Created by Vanshit Angra on 21/03/22.
//

//#include <iostream>
//using namespace std;
//int main()
//{   int l;
//    cout<<"enter the lenghth of array"<<endl;
//    cin>>l;
//    int arr[l];
//    int sum=0,diff=0,suma=0;
//
//    for (int i=0;i<l-1;i++)
//    {
//        cout<<"enter the element number"<<"  "<<(i+1)<<endl;
//        cin>>arr[i];
//        suma=suma+arr[i];
//    }
//    for (int i=0;i<=l;i++)
//    {
//        sum=sum+i;
//
//    }
//    diff=sum-suma;
//    cout<<"missing number is "<<" "<<diff;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int m,n;
//    cout<<"enter the length of array m  "<<endl;
//    cin>>m;
//    cout<<"enter the lenght of array n "<<endl;
//    cin>>n;
//    int arr1[m],arr2[n],arr3[m+n];
//    for(int i=0;i<m;i++)
//    {
//        cout<<"enter the element "<<(i+1)<<"of m"<<endl;
//        cin>>arr1[i];
//    }
//    for (int i=0;i<n;i++)
//    {
//        cout<<"enter the element "<<(i+1)<<"of n"<<endl;
//        cin>>arr2[i];
//    }
//    for(int i=0;i<(m+n);i++)
//    {
//        if(i<m)
//        {
//            arr3[i]=arr1[m];
//        }
//        else
//        {
//            arr3[m+i]=arr2[n];
//        }
//
//    }
//    cout<<"new array is "<<endl;
//    for(int i=0;i<(m+n);i++)
//    {
//        cout<<arr3[i]<<" ";
//    }
//    return 0;
//}
