#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
node *InsertAtHead(node *&head, int val)
{
    node *newNode = new node(val);
    node *tmp = head;
    tmp->prev = newNode;
    newNode->next = tmp;
    newNode->prev = NULL;
    head = newNode;
    return head;
}
void printLinkedList(node *head)
{
    node *tmp = head;
    while (tmp->next != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
node *InsertAtEnd(node *&head, int val)
{
    node *tmp = head;
    node *newNode = new node(val);
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next = NULL;

    return head;
}
node *InsertAtMid(node *&head, int val, int pos)
{
    node *tmp = head;
    node *emp = NULL;
    node *newNode = new node(val);
    int i = 0;
    while (i < pos - 1 && tmp != NULL)
    {
        emp = tmp;
        tmp = tmp->next;
        i++;
    }

    newNode->prev = emp->next;
    newNode->next = tmp->next;
    emp->next->next = newNode;
    tmp->next->prev = newNode;
    return head;
}
node *DeletionAtHead(node *&head)
{
    node *tmp = head;
    tmp = tmp->next;
    head = tmp;
    head->prev = NULL;
    return head;
}

node *DeletionAtEnd(node *&head)
{
    node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = NULL;
    return head;
}
node *DeletionAtMid(node *&head, int pos)
{
    node *tmp = head;
    int i = 0;
    node *emp = NULL;
    while(i<pos-1 && tmp!=NULL){
        emp = tmp;
        tmp = tmp->next;
        i++;
    }
    emp->next = tmp->next;
    tmp->next->prev = emp;
    return head;
}
int main()
{
    node *h1 = new node(43);
    node *h2 = new node(3);
    node *h3 = new node(7);
    node *h4 = new node(54);

    h1->next = h2;
    h2->prev = h1;
    h2->next = h3;
    h3->prev = h2;
    h3->next = h4;
    h4->prev = h3;
    h4->next = NULL;

    cout << "Inserting At Head : ";
    h1 = InsertAtHead(h1, 12);
    printLinkedList(h1);

    cout << "Inserting At the Mid : ";
    h1 = InsertAtMid(h1, 34, 2);
    printLinkedList(h1);

    cout << "Inserting At End : ";
    h1 = InsertAtEnd(h1, 98);
    printLinkedList(h1);

    cout << "Deletion At Head : ";
    h1 = DeletionAtHead(h1);
    printLinkedList(h1);

    cout << "Deletion At Mid : ";
    h1 = DeletionAtMid(h1, 2);
    printLinkedList(h1);

    cout << "Deletion At End : ";
    h1 = DeletionAtEnd(h1);
    printLinkedList(h1);
    return 0;
}