//It is a type of linear data structure which has many nodes. which contain some data and the next node address


#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    void insert(node* &head,int d)
    {
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }

};

int main()
{
    node* ob =new node(10);
    cout<< ob->data<<endl;
    cout<< ob->next<<endl;
}