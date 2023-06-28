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

void store(node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->val);
        return;
    }
    store(root->left, ans);
    store(root->right, ans);
}
bool leafSimilar(node *root1, node *root2)
{
    vector<int> ans1;
    vector<int> ans2;

    store(root1, ans1);
    store(root2, ans2);

    if (ans1.size() != ans2.size())
        return false;
    for (int i = 0; i < ans1.size(); i++)
    {
        if (ans1[i] != ans2[i])
            return false;
    }

    return true;
}
int main()
{
    node *root1 = NULL, *root2 = NULL;
    root1 = formTree(root1);
    root2 = formTree(root2);
    if (leafSimilar(root1, root2))
    {
        cout << "Yup they are Similar Tree\n";
    }
    else
    {
        cout << "They are not Similar tree\n";
    }
    return 0;
}