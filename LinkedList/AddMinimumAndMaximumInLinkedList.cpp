#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *next;
    int data;
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
node *InsertAtEnd(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
    }
    else
    {
        node *tmp = head;

        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }

        tmp->next = newNode;
        newNode->next = NULL;
        // head = tmp;
    }

    return head;
}
void printLinkedList(node *&head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int FindMinimumNode(node *&head)
{
    node *tmp = head;
    int mini = INT_MAX;
    while (tmp != NULL)
    {
        if (mini > tmp->data)
        {
            mini = tmp->data;
        }
        tmp = tmp->next;
    }
    return mini;
}
int FindMaximumNode(node *&head)
{
    node *tmp = head;
    int maxi = INT_MIN;
    while (tmp != NULL)
    {
        if (maxi < tmp->data)
        {
            maxi = tmp->data;
        }
        tmp = tmp->next;
    }
    return maxi;
}
node *InsertAtHead(node *&head, int val)
{
    node *tmp = head;
    node *newNode = new node(val);
    newNode->next = tmp;
    head = newNode;
    return head;
}
int main()
{
    cout << "How many elements do u want ?? ";
    int n;
    cin >> n;
    node *newNode = NULL;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        newNode = InsertAtEnd(newNode, val);
    }

    printLinkedList(newNode);

    int miniNodeValue = FindMinimumNode(newNode);
    int maxiNodeValue = FindMaximumNode(newNode);
    if (miniNodeValue != INT_MAX)
    {

        newNode = InsertAtHead(newNode, miniNodeValue);
    }
    if (maxiNodeValue != INT_MIN)
    {

        newNode = InsertAtHead(newNode, maxiNodeValue);
    }

    printLinkedList(newNode);

    return 0;
}