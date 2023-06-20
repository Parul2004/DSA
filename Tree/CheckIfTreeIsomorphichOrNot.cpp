#include<bits/stdc++.h>
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
 // Return True if the given trees are isomotphic. Else return False.
    bool iso(node *root1,node *root2){
        if(root1==NULL || root2 == NULL) return (root1==root2);
        
        return (root1->val == root2->val) && iso(root1->left,root2->right) && iso(root1->right,root2->left);
    }
    
     bool isSame(node *root1,node *root2){
        if(root1==NULL || root2 == NULL) return (root1==root2);
        
        return (root1->val == root2->val) && isSame(root1->left,root2->left) 
        && isSame(root1->right,root2->right);
    }
    
    bool isIsomorphic(node *root1,node *root2)
    {
    //add code here.
        if(root1 == NULL && root2 == NULL) return true;
        return iso(root1,root2) || isSame(root1,root2);
    }
int main(){
     node *root1 = NULL;
     root1 = formTree(root1);

     node *root2 = NULL;
     root2 = formTree(root2);
     if(isIsomorphic(root1,root2)){
        cout<<"Yes Both are Isomorphic\n";
     }
     else{
        cout<<"Both are not Isomorphic\n";
     }
    return 0;
}