#include <iostream>
#include<stdlib.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
void show_data(Node *head)
{
    Node *tail;
    tail = head;
    while (tail->next != NULL)
    {
        cout << tail->data << "->";
        tail = tail->next;
    }
}
int main()
{
    Node *ptr, *head = 0;
    ptr = new Node;
    cout << "Input values : ";
    cin >> ptr->data;
    while (ptr->next != NULL)
    {
    	ptr->next = new Node;
        if (head == 0)
        {
            head = ptr;
        }
        ptr = ptr->next;
        cin >> ptr->data;
        if (ptr->data == -999)
        {
            ptr->next = NULL;
            break;
        }
    }
    show_data(head);
    return 0;
}
