#include <iostream>
using namespace std;
class overriding
{
    public:
    void print()
    {
        cout<<"My name is Vanshit Angra(it represent parent class ) "<<endl;
    }
    void abc()
    {
        cout<<"abc is a function of parent classs "<<endl;
    }
};
class b : public overriding
{
    public:
    void print()
    {
        cout<<"I'm a student of 2nd sem Be (it represent base class function) "<<endl;
    }
};
int main()
{
    b ob;
    ob.print();
    overriding ob1 = b();
    ob1.print();
}
