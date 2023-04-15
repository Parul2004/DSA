#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;

    node(int data)
    {
        this->value = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *&root)
{
    cout << "Enter node's value : \n";
    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    root = new node(data);

    cout << "Inserting data in the left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Inserting data in the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
int heightOfTree(node *root)
{
    if (root == NULL)
        return 0;

    int leftTreeHeight = heightOfTree(root->left);
    int rightTreeHeight = heightOfTree(root->right);

    return max(leftTreeHeight, rightTreeHeight) + 1;
}
int main()
{
    node *root = NULL;
    buildTree(root);
    cout << "Height of Binary Tree is : "<<heightOfTree(root) << endl;
    ;
    return 0;
}