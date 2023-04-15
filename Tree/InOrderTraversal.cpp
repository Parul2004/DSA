#include<iostream>
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
    cout<<"Enter the node value\n";
    int val;
    cin>>val;
    root = new node(val);

    if(val == -1) return NULL;

    cout<<"Insert element in the left of "<<val<<endl;
    root->left = treeFormation(root->left);

    cout<<"Insert element in the right of "<<val<<endl;
    root->right = treeFormation(root->right);

    return root;

}

void InOrderTraversal(node *&root){

    if(root == NULL) return;

    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);

}
int main(){
    
    node *root = NULL;
    root = treeFormation(root);
    InOrderTraversal(root);
    return 0;
}