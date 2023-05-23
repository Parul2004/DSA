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
void printLinkedList(node *&head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
node *reverseLinkedList(node *&head)
{
    node *curr = head;
    node *prev = NULL;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return  prev;
}
int main()
{

    node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(3);
    node *head4 = new node(4);

    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = NULL;
    head1 = reverseLinkedList(head1);
    printLinkedList(head1);
    return 0;
}