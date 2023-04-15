#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int v)
    {
        this->data = v;
        this->left = NULL;
        this->right = NULL;
    }
};

node *treeFormation(node *&root)
{
    cout << "Enter node's value\n";
    int d;
    cin >> d;

    if (d == -1)
        return NULL;

    root = new node(d);

    cout << "Enter data in the left of " << d << endl;
    root->left = treeFormation(root->left);

    cout << "Enter data in the right of " << d << endl;
    root->right = treeFormation(root->right);

    return root;
}
int heightOfBinaryTree(node *root)
{

    if (root == NULL)
        return 0;

    int leftHeight = heightOfBinaryTree(root->left);
    int rightHeight = heightOfBinaryTree(root->right);

    return max(leftHeight, rightHeight) + 1;
}
/*

bool IfBalancedOrNot(node *root)
{

    if (root == NULL)
        return true;

    int lh = heightOfBinaryTree(root->left);
    int rh = heightOfBinaryTree(root->right);

    if (abs(lh - rh) > 1)
        return false;

    bool left = IfBalancedOrNot(root->left);
    bool right = IfBalancedOrNot(root->right);

    if (left == false || right == false)
        return false;

    return true;

    // Time Complixity O(n^2)
    // because O(n) for height and O(n) for checking every node balanced or not
}

*/
int Height(node *root)
{
    if (root == NULL)
        return 0;

    int leftHeight = Height(root->left);
    if (leftHeight == -1)
        return -1;

    int rightHeight = Height(root->right);
    if (rightHeight == -1)
        return -1;

    if (abs(leftHeight - rightHeight) > 1)
        return -1;

    return max(leftHeight, rightHeight) + 1;
}
bool IfBalancedOrNot(node *root)
{
    return Height(root) != -1;

    // Time Complexity - O(n);
}

int main()
{

    node *root = NULL;
    root = treeFormation(root);

    if (IfBalancedOrNot(root))
    {
        cout << "Given Binary Tree is Balanaced \n";
    }
    else
    {
        cout << "Given Binary Tree is not Balanaced\n";
    }

    return 0;
}