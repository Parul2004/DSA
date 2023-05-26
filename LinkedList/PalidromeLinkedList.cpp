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
node *reverse(node *head)
{
    node *curr = head;
    node *prev = NULL;
    node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}
bool isPalindrome(node *&head)
{
    node *luck = head;
    node *curr = head;

    node *tmp = reverse(luck);
    printLinkedList(tmp);
    printLinkedList(curr);

    while (curr != NULL && tmp != NULL)
    {
        if (curr->data != tmp->data)
            return false;
        curr = curr->next;
        tmp = tmp->next;
    }
    return true;
}

/*

bool checkPalidrome(vector<int>&v){
    int s = 0,e  =v.size()-1;
    while(s<e){
        if(v[s]!=v[e]) return false;
        s++;
        e--;
    }
    return true;
}

bool isPalidrome(node *&head){
    vector<int>v;
    node *curr = head;
    while(curr!=NULL){
        v.push_back(curr->data);
        curr = curr->next;

    }
    return checkPalidrome(v);

}
*/
int main()
{
    node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(3);
    node *head4 = new node(4);
    node *head5 = new node(2);
    node *head6 = new node(1);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = head6;
    head6->next = NULL;

    if (isPalindrome(head1))
    {
        cout << "Yup it is a Palidrome !!!";
    }
    else
    {
        cout << "Not a Palidrome !!!";
    }
    printLinkedList(head1);
    return 0;
}