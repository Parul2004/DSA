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
vector<int> PostOrderBy2Stack(node *root)
{

    vector<int> v;

    stack<int> s1;
    stack<node *> s2;

    s2.push(root);

    while (!s2.empty())
    {
        node *tmp = s2.top();
        s2.pop();

        s1.push(tmp->data);

        if (tmp->left)
        {
            s2.push(tmp->left);
        }
        if (tmp->right)
        {
            s2.push(tmp->right);
        }
    }

    while (!s1.empty())
    {
        v.push_back(s1.top());
        s1.pop();
    }

    return v;
}
int main()
{

    node *root = NULL;
    root = treeFormation(root);
    vector<int> v = PostOrderBy2Stack(root);

    cout << "PostOrder of Binary Tree is : ";
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}