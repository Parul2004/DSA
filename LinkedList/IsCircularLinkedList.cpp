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
bool isCircular(node *&head){
    if(head == NULL) return false;
    node *temp = head;
    while(temp->next!=NULL && temp->next!=head){
        temp = temp->next;
    }
    if(temp->next == NULL) return false;
    return true;
}
int main()
{
    
    node *head1 = new node(1);
    node *head2 = new node(4);
    node *head3 = new node(8);
    node *head4 = new node(5);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head1;

    if(isCircular(head1)){
        cout<<"YES Given Linked List is Circular .\n";
    }
    else{
         cout<<"NO Given Linked List is no Circular .\n";
    }
    return 0;
}