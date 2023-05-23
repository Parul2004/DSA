#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
node *insertAtHead(node *&head, int val)
{
    node *tmp = new node(val);
    tmp->next = head;
    head = tmp;
    return head;
}
void printLinkedList(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
node *insertAtEnd(node *&head, int val)
{
    node *tmp = new node(val);
    node *st = head;
    while(st->next!=NULL){
        st = st->next;
    }
    st->next = tmp;
    tmp->next = NULL;
   
    return head;
}
node *insertAtMid(node *&head,int data,int pos){
       node *tmp = head;
       node *newNode = new node(data);
       int i = 0;
       while(i<pos-1 && tmp!=NULL){
             tmp = tmp->next;
             i++;
       }
       node *prev = tmp->next;
       tmp->next = newNode;
       newNode->next = prev;

       return head;
}
node *DeleteAtHead(node *&head){
    node *tmp = head;
    tmp = tmp->next;
    head = tmp;
    return head;
}
node *DeleteFromEnd(node *&head){
    node *tmp = head;
    while(tmp->next->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next = NULL;
   
    return head;
}

node *DeleteFromMid(node *&head,int pos){
    node *tmp = head;
    int i = 0;
    node *emp = NULL;
    while(i<pos-1 && tmp!=NULL){
        emp = tmp;
        tmp = tmp->next;
        i++;
    }
    node * prev = tmp;
    prev->next = tmp->next->next;
    return head;

}
int main()
{
    node *head1 = new node(10);
    node *head2 = new node(6);
    node *head3 = new node(92);
    node *head4 = new node(28);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = NULL;
    cout << "\nBefore Inserting Node at head : ";
    printLinkedList(head1);

    head1 = insertAtHead(head1, 123);
    cout << "\nAfter Inserting Node at head : ";
    printLinkedList(head1);

    cout << "\nAfter Inserting Node at end : ";
    head1 = insertAtEnd(head1, 9);
    printLinkedList(head1);

    cout << "\nAfter Inserting Node at Mid : ";
    head1 = insertAtMid(head1, 29,2);
    printLinkedList(head1);

    cout<<"\nDelete At Head : ";
    head1 = DeleteAtHead(head1);
    printLinkedList(head1);

    cout<<"\nDelete From the mid : ";
    head1 = DeleteFromMid(head1,5);
    printLinkedList(head1);

    cout<<"\nDelete From the End : ";
    head1 = DeleteFromEnd(head1);
    printLinkedList(head1);

    return 0;
}