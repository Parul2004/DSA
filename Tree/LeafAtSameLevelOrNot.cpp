#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *left;
    node *right;
    int val;

    node(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *formTree(node *root)
{
    int data;
    cin >> data;
    if (data == -1)
        return NULL;
    root = new node(data);

    cout << "Inserting element in the left of " << data << endl;
    root->left = formTree(root->left);

    cout << "Inserting element in the right of " << data << endl;
    root->right = formTree(root->right);

    return root;
}
int maxheight(node *root)
{
    if (root == NULL)
        return 0;
    int lh = maxheight(root->left);
    int rh = maxheight(root->right);
    return 1 + max(lh, rh);
}
int minheight(node *root)
{
    if (root == NULL)
        return INT_MAX;
    if(root->left==NULL && root->right == NULL) return 1;
    int lh = minheight(root->left);
    int rh = minheight(root->right);
    return 1 + min(lh, rh);
}
bool check(node *root)
{
    // Your code here
    if (root == NULL)
        return true;
    return maxheight(root)==minheight(root);
}
int main()
{

    node *root = NULL;
    root = formTree(root);
    cout<<check(root)<<endl;
    return 0;
}