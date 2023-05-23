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
    cout << "\n";
}
node *RemoveLinkedListElements(node *&head, int val)
{

    while (head != NULL && head->data == val)
    {
        head = head->next;
    }

    if (head == NULL)
        return head;
    
    node *tmp = head;

    while (tmp->next != NULL)
    {
        if (tmp->next->data == val)
        {
            tmp->next = tmp->next->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    if (head->data == val && head->next == NULL)
        return NULL;

    return head;
}
int main()
{
    node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(1);
    node *head4 = new node(1);
    node *head5 = new node(1);
    node *head6 = new node(1);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = head6;
    head6->next = NULL;
    printLinkedList(head1);
    head1 = RemoveLinkedListElements(head1, 1);
    printLinkedList(head1);
    return 0;
}