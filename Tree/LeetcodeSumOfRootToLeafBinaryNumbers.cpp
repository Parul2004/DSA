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

node *formTree(node *root)
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

void sumLeaf(node *root, vector<int> &v, int &sum)
{

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->data);
        int l = 0;
        cout << "\nElements in vector is : ";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\nSum is : ";
        for (int i = v.size() - 1; i >= 0; i--)
        {
            sum = sum + v[i] * pow(2, l);
            l++;
        }
        v.pop_back();
        cout << sum << endl;
        return;
    }

    v.push_back(root->data);

    if (root->left != NULL)
        sumLeaf(root->left, v, sum);

    // else if (root->left == NULL)
    //     return;

    if (root->right != NULL)
        sumLeaf(root->right, v, sum);

    // else if (root->right == NULL)
    //     return;

    v.pop_back();
}
int sumRootToLeaf(node *root)
{
    if (root == NULL)
        return 0;
    vector<int> v;

    int sum = 0;
    sumLeaf(root, v, sum);
    return sum;
}
int main()
{

    node *root = NULL;
    root = formTree(root);

    cout << sumRootToLeaf(root);
    return 0;
}