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
void insertattail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;//or we can write temp also

}
void insertAtMiddle(Node* head,int pos,int d)
{
    Node* temp=head;
    int cnt=1;
    while (cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void print(Node* &head)
{
        Node* temp=head;

        while(temp!=NULL)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl;

}
int main()
{
    Node* node1=new Node(5);
    Node* tail=node1;
    Node* head=node1;

    insertattail(tail,10);
    insertattail(tail,12);
    insertattail(tail,15);
    print(head);
    insertAtMiddle(head,4,13);
    insertAtMiddle(head,5,14);

    print(head);
}