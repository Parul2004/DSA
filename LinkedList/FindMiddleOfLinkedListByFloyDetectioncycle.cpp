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
node *printMiddle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast->next != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
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
    head6->next = NULL;

    head1 = printMiddle(head1);
    cout << "Middle is " << head1->data << "\n";
    return 0;
}