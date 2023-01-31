#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity "<<v.capacity()<<endl;

     v.push_back(2);
    cout<<"Capacity "<<v.capacity()<<endl;

     v.push_back(13);
    cout<<"Capacity "<<v.capacity()<<endl;
    cout<<"size"<<v.size()<<endl;


}
