#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildtree(node* root)
{
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root  = new node(data);  
    if(data ==-1)
    {
        return NULL;
    }
    cout<<"insertion in left of "<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"insertion in right of "<<data<<endl;
    root->right = buildtree(root->right);
    return root;
}
void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }
    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);
}
void preorder(node* root) {
    if(root == NULL) {
        return ;
    }
     cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root) {
    if(root == NULL) {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";
}
int main(){
    node* root = NULL;
    root = buildtree(root);
    cout << "inorder traversal is:  ";
    inorder(root); 
    cout << endl << "preorder traversal is:  ";
    preorder(root); 
    cout << endl << "postorder traversal is:  ";
    postorder(root); 
return 0;
}
