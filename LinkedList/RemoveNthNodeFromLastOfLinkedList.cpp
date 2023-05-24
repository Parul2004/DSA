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
int countNodes(node *head)
{
    int c = 0;
    while (head != NULL)
    {
        c++;
        head = head->next;
    }
    return c;
}
node *RemoveNthNodeFromLast(node *head, int n)
{
    node *tmp = head;
    node *emp = NULL;
    int c = countNodes(head);
    int j = c - n, i = 0;
    while (i < j && tmp != NULL)
    {
        emp = tmp;
        tmp = tmp->next;
        i++;
    }
    emp->next = tmp->next;
    return head;
}
node *RemoveNthNodeFromLastBySlowAndFasterApproach(node *head, int n)
{

    node *slow = head;
    node *fast = head;

    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }
    if (fast == NULL)
    {
        head = head->next;
        return head;
    }

    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return head;
}
void printLinkedList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(3);
    node *head4 = new node(4);
    node *head5 = new node(5);
    // node *head6 = new node(6);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = NULL;
    // head6->next = NULL;

    // head1 = RemoveNthNodeFromLast(head1, 2);
    head1 = RemoveNthNodeFromLastBySlowAndFasterApproach(head1, 2);
    printLinkedList(head1);
   
    return 0;
}