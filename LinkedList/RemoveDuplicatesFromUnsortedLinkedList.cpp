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
node *removeDuplicates(node *&head)
{
    // Time Complexity = O(N*N)
    // Space Complexity = O(1)


    node *ptr1 = head, *ptr2 = NULL, *dup = NULL;
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
        while (ptr2->next != NULL)
        {
            if (ptr1->data == ptr2->next->data)
            {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
    return head;

}

node *removeDuplicatesInLessTimeComplexity(node *&head){
    unordered_set<int>mpp;
    node *tmp = head,*prev = NULL;
    while(tmp!=NULL){
        if(mpp.find(tmp->data) != mpp.end()){
              prev->next = tmp->next;
              delete(tmp);
        }
        else{
            mpp.insert(tmp->data);
            prev = tmp;
        }
        tmp = prev->next;
    }
    return head;
}
int main()
{
    node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(3);
    node *head4 = new node(6);
    node *head5 = new node(3);
    node *head6 = new node(3);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = head6;
    head6->next = NULL;

    // head1 = removeDuplicates(head1);
    head1 = removeDuplicatesInLessTimeComplexity(head1);
    printLinkedList(head1);
    return 0;
}