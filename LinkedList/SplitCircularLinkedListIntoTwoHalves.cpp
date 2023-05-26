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
void printLinkedList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void SplitCircularLinkedList(node *&head)
{

    node *slowPtr = head;
    node *fastPtr = head;

    while (fastPtr->next != head && fastPtr->next->next != head)
    {
        fastPtr = fastPtr->next->next;
        slowPtr = slowPtr->next;
    }

    // for even length linked list
    if (fastPtr->next->next == head)
    {
        fastPtr = fastPtr->next;
    }

    node *head1 = head;
    node *slowNext = slowPtr->next;

    slowPtr->next = head1;
    fastPtr->next = slowNext;

// Both will go to Infinite Loop

    // printLinkedList(slowPtr);
    // printLinkedList(fastPtr);

}
int main()
{
    node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(3);
    node *head4 = new node(4);
    node *head5 = new node(5);
    node *head6 = new node(6);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = head6;
    head6->next = head1;

    SplitCircularLinkedList(head1);
    return 0;
}