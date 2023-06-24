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

bool ismirror(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    return (root1->val == root2->val) && ismirror(root1->left, root2->right) && ismirror(root1->right, root2->left);
}
int main()
{

    node *root1 = NULL, *root2 = NULL;
    root1 = formTree(root1);
    root2 = formTree(root2);
    if (ismirror(root1, root2))
    {
        cout << "Yup they are mirror Tree\n";
    }
    else
    {
        cout << "They are not mirror tree\n";
    }

    return 0;
}