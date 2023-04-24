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
vector<vector<int>> ZigZagTraversal(node *root)
{
    vector<vector<int>> v;
    if (root == NULL)
        return v;

    queue<node *> q;
    q.push(root);
    bool leftToRight = true;
    while (!q.empty())
    {
        int s = q.size();
        vector<int> c(s);

        for (int i = 0; i < s; i++)
        {
            node *p = q.front();
            q.pop();
            
            int index = (leftToRight) ? i : (s - i - 1);
            c[index] = p->data;

            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }

        leftToRight = !leftToRight;
        v.push_back(c);
    }
    return v;
}
int main()
{
    node *root1 = NULL;
    root1 = buildTree(root1);

    vector<vector<int>> v = ZigZagTraversal(root1);

    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}