#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter row of matrix :"<<endl;
    cin>>n;
    cout<<"enter column of matrix :"<<endl;
    cin>>m;
    
    int a[n][m];
cout<<"enter element of matrix :"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
cout<<"matrix :"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    
        cout<<a[i][j]<<" ";
        cout<<endl;
    
}   

}