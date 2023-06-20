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
node *formTree(node *&root)
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

void getNodes(node *root, int &c)
{

    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
    }
    else
        c++;
    getNodes(root->left, c);
    getNodes(root->right, c);
}
int countNonLeafNodes(node *root)
{
    // Code here
    if (root == NULL)
        return 0;
    int c = 0;
    getNodes(root, c);
    return c;
}

int main()
{
    node *root = NULL;
    root = formTree(root);
    cout << "Number of non-leaf nodes are : " << countNonLeafNodes(root) << endl;
    return 0;
}