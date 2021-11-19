#include<iostream>
#include<stdlib.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void insert_at_end(Node *end,Node *head){
Node *tail,*ptr ;
ptr=head;
cout<<"\nEnter Data : ";
tail = new Node;
cin>>tail->data;
tail->next=end;
end->next =NULL;
while(ptr->next!=NULL)
{
cout<<ptr->data;
ptr=ptr->next;
}


}
void insert_at_start(Node* head){
cout<<"\nEnter Data ";
Node *HEAD;
HEAD = new Node;
cin>>HEAD->data;
HEAD->next = head;

cout<<"\nAfter insertion at start: ";

while(HEAD->next!=NULL)
{
cout<<HEAD->data<<" ";
HEAD=HEAD->next;
}
}
void insert_at_random(Node *head,int pos){

}
void print_data(Node *head){
    Node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main(){
    Node *ptr,*head = 0;
    ptr = new Node;
    cout<<"Enter Data Members : ";
    cin>>ptr->data;
    while(ptr->next!=NULL)
    {
        if(head==0)
        head=ptr;
        ptr->next = new Node;
        ptr=ptr->next;
        cin>>ptr->data;
        if(ptr->data==-999)
        ptr->next=NULL;
    }
    print_data(head);
    insert_at_start(head);
    insert_at_end(ptr,head);
    return 0;
}
