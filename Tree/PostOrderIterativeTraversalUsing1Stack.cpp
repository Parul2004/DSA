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

vector<int> PostOrder1Stack(node *&root)
{

    stack<node *> st;
    vector<int> v;

    node *curr = root;
    node *tmp;

    while (curr != NULL || !st.empty())
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {

            tmp = st.top()->right;

            if (tmp == NULL)
            {
                tmp = st.top();
                st.pop();

                v.push_back(tmp->data);

                while (!st.empty() && tmp == st.top()->right)
                {
                    tmp = st.top();
                    st.pop();

                    v.push_back(tmp->data);
                }
            }
            else
            {
                curr = tmp;
            }
        }
    }

    return v;
}
int main()
{

    node *root = NULL;
    root = treeFormation(root);
    
    vector<int> v = PostOrder1Stack(root);

    cout << "PostOrder Traversal OF Binary Tree : ";
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}