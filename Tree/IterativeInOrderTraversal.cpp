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

vector<int> inOrderIterativeTraversal(node *&root)
{
    vector<int> v;
    stack<node *> st;

   

    while (true)
    {
        if (root != NULL)
        {
            st.push(root);
            root = root->left;
        }
        else
        {
            if (st.empty())
                break;

            
            root = st.top();
            v.push_back(root->data);
            st.pop();

            root = root->right;
        }
    }
    return v;
}

/*

vector<int> inOrderIterativeTraversal(node *&root)
{
    vector<int> v;
    stack<node *> st;

    node *tmp = root;

    while (true)
    {
        if (tmp != NULL)
        {
            st.push(tmp);
            tmp = tmp->left;
        }
        else
        {
            if (st.empty())
                break;

            tmp = st.top();
            st.pop();

            v.push_back(tmp->data);


            tmp = tmp->right;
        }
    }
    return v;
}

*/
int main()
{

    node *root = NULL;
    root = treeFormation(root);

    vector<int> vect = inOrderIterativeTraversal(root);
    cout << "InOrder Traversal for Binary Tree : ";
    for (auto i : vect)
    {
        cout << i << " ";
    }

    return 0;
}