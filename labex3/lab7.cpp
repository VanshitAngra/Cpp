#include <iostream>
using namespace std;


class mammals {

   public:
    void mam() {
        cout << "I am Mammals " << endl;
    }

   
};


class  marine  {
 
   public:
    void mar() {
        cout << "I am marine animal " << endl;
    }
};
class bluewhale : public mammals,public marine
{
    public:
    void both() {
       cout<<"I belong to both the categories: Mammals as well as Marine Animals";
    }
};

int main() 
{
 bluewhale obj;
 obj.mam();
 obj.mar();
 obj.both();
 
 
   

    return 0;
}