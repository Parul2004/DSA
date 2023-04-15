#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }

};

node *treeFormation(node *&root){
    cout<<"Enter the data : "<<endl;
    int val;
    cin>>val;
    root = new node(val);

    if(val == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<val<<endl;
    root->left = treeFormation(root->left);

    cout<<"Enter data for inserting in right of "<<val<<endl;
    root->right = treeFormation(root->right);

     return root;
}

void levelOrder(node *&root){

    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
       node *temp = q.front();
       q.pop();

       if(temp == NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
       }
       else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
       }
    }
    
}
int main(){
    
     node *root = NULL;
     root = treeFormation(root);
     cout<<"Level Order Traversal : \n";
     levelOrder(root);
    return 0;
}