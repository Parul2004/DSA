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
vector<vector<int>> levelOrder(node *&root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++)
        {
            node *tempNode = q.front();
            q.pop();

            if (tempNode->left)
                q.push(tempNode->left);
            if (tempNode->right)
                q.push(tempNode->right);

            level.push_back(tempNode->data);
        }
        ans.push_back(level);
    }
    return ans;
}
int main()
{
    node *root = NULL;
    root = treeFormation(root);

    vector<vector<int>> v = levelOrder(root);

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