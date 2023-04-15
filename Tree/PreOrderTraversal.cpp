#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node *formTree(node *root)
{

    cout << "Enter the node's value\n";
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    root = new node(val);

    cout << "Inserting Element in the left of " << val << endl;
    root->left = formTree(root->left);

    cout << "Inserting Element in the right of " << val << endl;
    root->right = formTree(root->right);

    return root;
}

void PreOrder(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
int main()
{

    node *root = NULL;
    root = formTree(root);

    PreOrder(root);

    return 0;
}