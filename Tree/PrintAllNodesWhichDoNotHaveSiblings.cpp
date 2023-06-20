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

vector<int> noSibling(node *root)
{
    // code here
    vector<int> ans;
    queue<node *> q;
    q.push(root);
    int c = 0;
    while (!q.empty())
    {

        int s = q.size();
        cout<<"Size is "<<s<<endl;
        if (c == 0)
        {
            c++;

            node *tmp = q.front();
            q.pop();

            if (tmp->left != NULL)
                q.push(tmp->left);

            if (tmp->right != NULL)
                q.push(tmp->right);
        }
        if (s == 1)
        {
            c++;

            node *tmp = q.front();
            q.pop();

            ans.push_back(tmp->val);

            if (tmp->left != NULL)
                q.push(tmp->left);

            if (tmp->right != NULL)
                q.push(tmp->right);
        }
        else
        {
            c++;
            for(int i = 0;i<s;i++)
            {

                node *tmp = q.front();
                q.pop();

                if (tmp->left != NULL)
                    q.push(tmp->left);

                if (tmp->right != NULL)
                    q.push(tmp->right);

            }
        }

        
    }
    return ans;
}
int main()
{
    node *root = NULL;
    root = formTree(root);
    vector<int> result = noSibling(root);
    cout << "Elements which do not have siblings are : ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}