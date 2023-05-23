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
int countNodes(node* head){
        int c = 0;
        while(head!=NULL){
            c++;
            head = head->next;
        }
        return c;
    }
bool isIdentical(node *&head1, node *&head2)
{
    int c1 = countNodes(head1);
    int c2 = countNodes(head2);
    if(c1!=c2) return false;
    else{
        while(head1!=NULL && head2!=NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    return true;
}
int main()
{
    node *h1 = new node(1);
    node *h2 = new node(2);
    node *h3 = new node(3);
    node *h4 = new node(4);

    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = NULL;

    node *h5 = new node(1);
    node *h6 = new node(2);
    node *h7 = new node(3);
    node *h8 = new node(4);

    h5->next = h6;
    h6->next = h7;
    h7->next = h8;
    h8->next = NULL;

    if (isIdentical(h1, h5))
    {
        cout << "Yup Identical\n";
    }
    else
    {
        cout << "Not Identical\n";
    }
    return 0;
}