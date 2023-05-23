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
node *InsertAtHead(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
    return head;
}
void printLinkedList(node *&head){
    node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int countNode(node *&head){
    int c = 0;
    node *tmp = head;
    while(tmp!=NULL){
        c++;
        tmp = tmp->next;
    }
    return c;
}
node *deleteMiddleNode(node *&head){
    int c = countNode(head);
    if(c<3){
        return head;
    }
    int z = c/2;
    int i = 0;
    node *tmp = head;
    while(i<z-1 && tmp!=NULL){
        tmp = tmp->next;
        i++;
    }
    tmp->next  = tmp->next->next;
    return head;
}
int main()
{
    node *newNode = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
        {
            newNode = InsertAtHead(newNode, val);
        }
    }
    printLinkedList(newNode);
    newNode = deleteMiddleNode(newNode);
    printLinkedList(newNode);
    return 0;
}