#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(18);
    a.push_back(19);
    for(vector<int>:: iterator i=a.begin();i!=a.end();i++)
    cout << *i << "  ";
}
// #include<iostream>  
// #include<vector>  
// using namespace std;  
// int main()  
// {  
// vector<string> v1;  
// v1.push_back("javaTpoint ");  
// v1.push_back("tutorial");  
// for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr)  
// cout<<*itr;  
// return 0;   
// }  