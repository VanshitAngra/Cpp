 //love babbar 
#include <iostream>
#include <map>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
   
};
 //we have taken reference so that there should be no copy of the linked list and the change should take place in the original linked list
    void insert(Node* &head,int d)
    {
        //creating new node for inserting the new node
        Node* temp=new Node(d);
        temp->next=head;//address is refered to head
        head=temp;
    }

    void print(Node* &head)
    {
        Node* temp=head;
        while(temp!= NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
int main()
{
    //created a new node
    Node* node1=new Node(5);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node1
    Node* head = node1;
    
    print(head);

    insert(head,10);
        //print(head);

    insert(head,12);
        //print(head);

    insert(head,15);
    print(head);
    
    return 0;
}



// #include <iostream>
// #include <map>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* next;
//     Node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }

// };
// void insert(Node* &head,int d)
// {
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;

// }
// void print(Node* &head)
// {
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     Node* node1=new Node(5);
//     Node* head=node1;
//     print(head);
//     insert(head,10);
//     insert(head,12);
//     insert(head,15);
//     insert(head,9);
//     print(head);
// }