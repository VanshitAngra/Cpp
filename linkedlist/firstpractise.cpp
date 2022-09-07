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
        head=temp;//head is pointed to node 
    }
    void insertAtTail(Node* &tail,int d)
    {
        Node* temp=new Node(d);
        tail->next=temp;
        tail=tail->next;

    }
//     void insertAtMiddle(Node* head,Node* tail,int pos,int d)
// {
//     if(pos == 0)
//     {
//         insert(head,d);
//         return;
//     }
//     if(temp->next==NULL)
//     {
//         insertAtTail(tail,d);
//     }
//     Node* temp=head;
//     Node* temp=tail;
//     int cnt=1;
//     while (cnt<pos-1)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//     Node* nodetoinsert=new Node(d);
//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;
// }
void insertatanypos(Node* &head,Node* &tail,int pos,int d)
{
    
    Node* insert=new Node(d);
    Node* temp=head;
  if(pos==0)
  {
    insert->next=head;
    head=insert;
    return;
  }
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp==NULL)
    {
        tail->next=insert;
        tail=insert;
        return;
    }
    insert->next=temp->next;
    temp->next=insert;
    
  
    
   
}

    void print(Node* &head)
    {
        Node* temp=head;
        while(temp!= NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;//to move temp to next node
        }
        cout<<endl;
    }
int main()
{
    //created a new node
    // Node* node1=new Node();
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node1
    Node* head = NULL;
    Node* tail = NULL;
    
    //print(head);

    //insert(head,10);
        //print(head);

    //insert(head,12);
        //print(head);

    //insert(head,15);
    //print(head);
    int d,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>d;
         insertAtTail(tail,d);
     insertAtTail(tail,d);
     insertAtTail(tail,d);
    }
    // insertAtTail(tail,10);
    // insertAtTail(tail,12);
    // insertAtTail(tail,15);

    
    // print(head);
    insertatanypos(head,tail,1,22);
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