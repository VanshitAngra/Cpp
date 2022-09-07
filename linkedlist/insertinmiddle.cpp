#include<iostream>
#include<map>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtMiddle(Node* &head,int pos,int d)
{
    Node* temp=head;
    int count=1;
    while(count< pos-1)
    {
        temp=temp->next;
        count++;
    }
    Node* insertnode=new Node(5);
    insertnode->next=temp->next;
    temp->next=insertnode;
}
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node* node1=new Node(5);
    Node* head=node1;

    insertAtMiddle(head,2,15);
    //insertAtMiddle(head,3,12);
    //insertAtMiddle(head,4,9);

    print(head);
}
