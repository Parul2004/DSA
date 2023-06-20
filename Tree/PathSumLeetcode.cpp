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
node *formTree(node *&root)
{

    cout << "Enter the node's value\n";
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    root = new node(val);

    cout << "Inserting Element in the left of " << val << endl;
    root->left = formTree(root->left);

    cout << "Inserting Element in the right of " << val << endl;
    root->right = formTree(root->right);

    return root;
}
void pathSum(node *root, vector<int> &v, int &sum)
{
    if (root->left == NULL && root->right == NULL)
    {
        sum += root->data;
        cout<<sum<<"\n";
        v.push_back(sum);
        sum -= root->data;
        return;
    }

    sum += root->data;
    if (root->left != NULL)
    {
        pathSum(root->left, v, sum);
    }

    if (root->right != NULL)
    {
        pathSum(root->right, v, sum);
    }

    sum -= root->data;
}
bool hasPathSum(node *root, int targetSum)
{
    if (root == NULL)
        return false;
    vector<int> v;
    int sum = 0;
    pathSum(root, v, sum);
    cout << "\n\nYour vector is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == targetSum)
            return true;
    }
    return false;
}
int main()
{
    node *root = NULL;
    root = formTree(root);
    int targetSum;
    cin >> targetSum;
    if (hasPathSum(root, targetSum))
    {
        cout << "\nYup !!! Hurry ";
    }
    else
    {
        cout << "\nNot Found\n";
    }
    return 0;
}