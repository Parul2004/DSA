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
bool checkUtil(node *root,int level,int &leafLevel){
     if(root == NULL) return true;
     if(root->left == NULL && root->right == NULL){
        if(leafLevel == 0){
                  leafLevel = level;
                  return true;
        }
        return leafLevel==level;
     }

     return checkUtil(root->left,level+1,leafLevel)
     && checkUtil(root->right,level+1,leafLevel);
}

bool check(node *root){
    if(root == NULL) return true;
    int level = 0,leafLevel = 0;
    return checkUtil(root,level,leafLevel);
}
int main()
{

    node *root = NULL;
    root = formTree(root);
    cout<<check(root)<<endl;
    return 0;
}