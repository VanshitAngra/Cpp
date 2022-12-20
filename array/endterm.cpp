//linear search
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[100];
//     int n;
//     cout<<"enter the length of the array";
//     cin>>n;
//     int a,flag=0;
    
//     cout<<"enter the key to find ";
//     cin>>a;
//     cout<<"enter  the array";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(a==arr[i])
//         flag=1;
//     }
//     if(flag==1)
//     {
//         cout<<"element is present";

//     }else
//     cout<<"not presnt";
// }

// binary search
// #include<iostream>
// // #include<bits/stdc++.h>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<int> st;
//     st.push(21);
//     st.push(22);
//     st.push(23);
//     st.push(24);
//     st.push(25);
//     st.push(26);

//     while(!st.empty())
//     {
//         cout<<st.top()<<"\n";
//         st.pop();
//     }
// }

// // int main()
// {
//     int arr[100];
//     int n,k;
//     int mid,l=0,u;
//     cout<<"enter the length of the array ";
//     cin>>n;
//     cout<<"enter the key";
//     cin>>k;
//     cout<<"enter the array";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }


// }
// #include <iostream>
// #include<stack>
// #include<vector>
// using namespace std;

// int perc(char c)
// {
//     if(c=='^')
//     return 3;
//     else if(c=='/'||c=='*')
//     return 2;
//     else if (c=='+'||c=='-')
//     return 1;
//     else 
//     return -1;

// }
// string infixtopostfix(string s)
// {
//     stack<char> st;
//     string result;
//     for(int i=0;i<s.length();i++)
//     {
//         char c=s[i];
//         if((c>='a'&&c<='z')||(c>='A'||c<='Z')||(c>='0'&&c<='9'))
//         {
//             result+=c;
//         }
//         else if (c=='(')
//         {
//             st.push('(');
//         }
//         else if(c==')')
//         {
//             while(st.top()=='(')
//             {
//                 result+=st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else 
//         {
//             while(!st.empty()&& perc(s[i])<=perc(st.top()))
//             {
//                 result+=st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }
//     while(!st.empty())
//     {
//         result+=st.top();
//         st.pop;
//     }
//     return result;
// }
// int main()
// {

// }

// int main()
// {
    // int arr[5]={1,2,3,89,5},min,max;
    // min=arr[0];
    // max=arr[0];
    // for(int i=0;i<5;i++)
    // {
    //     if(arr[i]>max)
    //     {
    //         max=arr[i];
    //     }
    //     else if(arr[i]<min)
    //     {
    //         min=arr[i];
    //     }
    // }
    // int arr[100];
    // cin>>n;
//     arr v[100];
//     for(int i=0;i<100;i++)
//     {
//         cin>>v[i];
//     }
//     for(int i=0;i<100;i++)
//     {
//         if(v[i]>=0)
//         {
//             if(v[i]%2==0)
//             {
//                 cout<<v[i]<<" ";
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[100],n;
//     cout<<"enter the length of students "<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         int j;
//         for(j=0;j<i;j++)
//         {
//             if(arr[i]==arr[j])
//             break;
//         }
//         if(i==j)
//          cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int marks[] = { 100, 50, 78, 79, 50, 45, 78, 56, 12, 79};
//     int s1 = sizeof(marks)/sizeof(marks[0]);

//     cout << "Original array of marks: ";
    
//     for (int i=0; i < s1; i++) 
//     {cout << marks[i] <<" ";
//     }
//     cout <<"Unmatched marks of the students are: ";
//     for (int i=0; i<s1; i++)
//     {	
//         int j;
//         for (j=0; j<i; j++)
//            if (marks[i] == marks[j])
//                break;
//          if (i == j)
//           cout << marks[i] << " ";
//     }
//     return 0; 
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[100],x,b=0;
    for(int i=0;i<100;i++)
    {
        cin>>arr[i];
        b++;
        if(arr[i]== -1)
        {
            cin>>x;
            arr[i]=x;
            break;
        }
    }
    int a;
    for(int i=0;i<b;i++)
    {
        a=i;
        for(int j=i+1;j<b;j++)
        {
            
            if(arr[a]>arr[j])
            {
                a=j;
            }
            
        }
        if(arr[a]!=arr[i])
            {
                swap(arr[a],arr[i]);
            }
    }
    for(int i=0;i<b;i++)
    {
        cout<<arr[i]<<" ";
    }
}