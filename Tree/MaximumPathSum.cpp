#include <iostream>
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
    int data;
    cin >> data;
    if (data == -1)
        return NULL;
    root = new node(data);
    cout << "Enter the node's value in the left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the node's value in the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
int MaxSumTree(node *root, int &maxi)
{
    if (root == NULL)
        return 0;
    int lh = max(0, MaxSumTree(root->left, maxi));
    int rh = max(0, MaxSumTree(root->right, maxi));

    maxi = max(maxi, lh + rh + root->data);

    return root->data + max(lh, rh);
}
int main()
{

    node *root = NULL;
    root = buildTree(root);
    int maxi = 0;
    MaxSumTree(root, maxi);
    cout << maxi << endl;
    return 0;
}