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
node *RemoveDuplicates(node *&head){
    node *tmp = head;
    while(tmp!=NULL){
        if(tmp->next!=NULL &&(tmp->data==tmp->next->data)){
            tmp->next=tmp->next->next;
        }
        else{
            tmp = tmp->next;
        }
    }
    return head;
}
int main(){
    node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(3);
    node *head4 = new node(3);
    node *head5 = new node(3);
    node *head6 = new node(3);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = head6;
    head6->next = NULL;

    head1 = RemoveDuplicates(head1);
    printLinkedList(head1);

    return 0;
}