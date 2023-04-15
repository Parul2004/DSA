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
vector<int> PreOrderIterativeTraversal(node *&root)
{
    vector<int> v;

    stack<node *> s;
    s.push(root);

    while (!s.empty())
    {
        node *temp = s.top();
        s.pop();

        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);

        v.push_back(temp->data);
    }

    return v;
}
int main()
{
    node *root = NULL;
    root = treeFormation(root);

    vector<int> v = PreOrderIterativeTraversal(root);
    cout<<"PreOrder Traversal of Binary Tree is : ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}