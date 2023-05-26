#include <bits/stdc++.h>
using namespace std;

   class List {
      public:
          int data;
          List *next;

          List(int val) {
              this->data = val;
              next = NULL;
          }
          ~List() {
              if (next != NULL) {
                  delete next;
              }
          }
   };
List *foldAndMerge(List *head)
{
    if (head == NULL)
    {
        return head;
    }
    // Write your code here.
    List *slow = head;
    List *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = slow->next;
    slow->next = NULL;
    slow = head;

    vector<int> vectt;
    int i = -1;
    while (slow != NULL)
    {
        vectt.push_back(slow->data);
        slow = slow->next;
        i++;
    }
    List *temp = fast;
    while (temp != NULL)
    {
        temp->data = (vectt[i--]) * (temp->data);
        temp = temp->next;
    }
    return fast;
}
void printLinkedList(List *&head)
{
    List *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << "\n";
}
int main()
{
    List *head1 = new List(2);
    List *head2 = new List(2);
    List *head3 = new List(2);
    List *head4 = new List(2);
    // List *head5 = new List(2);
    // List *head6 = new List(6);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = NULL;
    // head5->next = head6;
    // head6->next = NULL;

    head1 = foldAndMerge(head1);
    printLinkedList(head1);
    return 0;
}