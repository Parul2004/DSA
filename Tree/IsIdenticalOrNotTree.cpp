#include<iostream>
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

node *buildTree(node *&root)
{
    cout << "Enter the data : ";
    int data;
    cin >> data;
    if (data == -1)
        return NULL;
    root = new node(data);
    cout << "Enter the node's value in the left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the node's value in the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

bool isIdenticalOrNot(node *root1,node *root2){
    if(root1 == NULL || root2 == NULL){
        return (root1 == root2);
    }
    return (root1->data == root2->data) 
    && isIdenticalOrNot(root1->left,root2->left)
    && isIdenticalOrNot(root1->right,root2->right);
}

int main(){
    
    node *root1 = NULL;
    root1 = buildTree(root1);

    node *root2 = NULL;
    root2 = buildTree(root2);

    if(isIdenticalOrNot(root1,root2)){
        cout<<"Both Trees Are Identical\n";
    }
    else{
        cout<<"Both Trees Not Are Identical\n";
    }

    return 0;
}