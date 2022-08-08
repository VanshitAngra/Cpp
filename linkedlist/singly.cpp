#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

};

int main()
{
    node* ob =new node();
    cout<< ob->data<<endl;
}