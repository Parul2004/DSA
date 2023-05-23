#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node *next;
    int data;
    node(int val){
        this->data = val;
        this->next = NULL;
    }
};
int countNodes(node* head){
        int c = 0;
        while(head!=NULL){
            c++;
            head = head->next;
        }
        return c;
    }
node *InsertAtMiddleOfLinkedList(node *head,int val){
      int c = countNodes(head);
      int i = c/2, j = 0;
      node *u = new node(val);
      if(c%2!=0){
            node *tmp = head;
            while(j<i && tmp!=NULL){
                j++;
                tmp = tmp->next;
            }
            node *t = tmp->next;
            tmp->next = u;
            u->next = t;

      }
      else{
            node *tmp = head;
            while(j<i-1 && tmp!=NULL){
                j++;
                tmp = tmp->next;
            }
            node *t = tmp->next;
            tmp->next = u;
            u->next = t;
      }
      return head;
}
void printLinkedList(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(3);
    node *head4 = new node(4);

    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = NULL;

    node *ans = InsertAtMiddleOfLinkedList(head1,56);
    printLinkedList(ans);
    return 0;
}