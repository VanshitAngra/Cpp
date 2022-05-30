#include <iostream>
using namespace std;
class overloading
{
    public:
    void mul(int a,int b)
    {
        cout<<"Multiple is "<<a*b<<endl;
    }
    void mul(double a,double b)
    {
        cout<<"Multiple 2 is "<<a*b<<endl;
    }
    void mul(int a,int b,int c)
    {
        cout<<"Multiple 3 is "<<a*b*c<<endl;
    }

};
int main()
{
    overloading ob;
    ob.mul(2,3);
    ob.mul(2.1,3.1);
    ob.mul(2,3,4);
    
    return 0;
}