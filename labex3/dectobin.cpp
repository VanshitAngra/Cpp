// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n,r,rev=0;
//     cin>>n;
//     while(n!=0)
//     {
//         r=n%2;
//         rev=(rev*10)+r;
//         n=n>>1;
//     }
//     cout<<rev<<endl;
// }

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=1;
    string s="";

    while(x<=n){

        if(x&n){
            s="1"+s;
        }
        else{
            s="0"+s;
        }
        x=x<<1;
    }
    cout<<n<<" : "<<s;
}