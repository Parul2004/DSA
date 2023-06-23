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
void convert(node *root){
    if(root == NULL) return;
    convert(root->left);
    convert(root->right);
    node *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
}
void levelOrderPrinting(node *root){
    vector<vector<int>>v;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
       vector<int>ans;

       int s = q.size();

       for(int i = 0;i<s;i++){
        node *tmp = q.front();
        q.pop();
        ans.push_back(tmp->val);

        if(tmp->left) q.push(tmp->left);
        if(tmp->right) q.push(tmp->right);
       }

       v.push_back(ans);
    }

    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void mirror(node *root){
    if(root == NULL) return;

    levelOrderPrinting(root);
    
    convert(root);

    levelOrderPrinting(root);
    
}
int main()
{

    node *root = NULL;
    root = formTree(root);
    mirror(root);
    return 0;
}