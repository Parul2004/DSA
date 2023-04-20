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
node *buildTree(node *&root)
{
    cout << "Enter the data : ";
    int val;
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }

    root = new node(val);
    cout << "Enter the node's value in the left of " << val << endl;
    root->left = buildTree(root->left);
    cout << "Enter the node's value in the right of " << val << endl;
    root->right = buildTree(root->right);

    return root;
}

int height(node *&root)
{
    if (root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
}
int diameter(node *&root, int d)
{
    if (root == NULL)
        return 0;
    int lh;
    if (root->left)
    {
        lh = height(root->left);
    }
    int rh;
    if (root->right)
    {
        rh = height(root->right);
    }
    d = max(d, lh + rh+1);

    diameter(root->left, d);
    diameter(root->right, d);

    return d;
}
int main()
{

    node *root = NULL;
   root = buildTree(root);
    int d = 0;
    cout << diameter(root, d) << endl;
    return 0;
}