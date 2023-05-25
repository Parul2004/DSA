#include<bits/stdc++.h>
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
node *reverseInKGroups(node *head,int k){
    node *curr = head;
    node *fir = NULL;
    node *prev = NULL;

    if(head==NULL) return head;
    int c = 0;
    while(c<k && curr!=NULL){
        fir = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fir;
        c++;
    }

    if(fir!=NULL){
        head->next = reverseInKGroups(fir,k);
    }
    return prev;
}
int main(){
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

   head1 = reverseInKGroups(head1,3);
    printLinkedList(head1);
    return 0;
}