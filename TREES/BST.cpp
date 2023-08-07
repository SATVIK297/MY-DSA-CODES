// #include<bits/stdc++.h>
// struct node {
// 	int key;
// 	struct node *left, *right;
// };
// struct node* newNode(int item)
// {
// 	struct node* temp
// 		= (struct node*)malloc(sizeof(struct node));
// 	temp->key = item;
// 	temp->left = temp->right = NULL;
// 	return temp;
// }
// void inorder(struct node* root)
// {
// 	if (root != NULL) {
// 		inorder(root->left);
// 		printf("%d ", root->key);
// 		inorder(root->right);
// 	}
// }
// struct node* insert(struct node* node, int key)
// {
// 	if (node == NULL)
// 		return newNode(key);
// 	if (key < node->key)
// 		node->left = insert(node->left, key);
// 	else
// 		node->right = insert(node->right, key);	
// 	return node;
// }
// struct node* minValueNode(struct node* node)
// {
// 	struct node* current = node;
// 	while (current && current->left != NULL)
// 		current = current->left;

// 	return current;
// }
// struct node* deleteNode(struct node* root, int key)
// {
// 	if (root == NULL)
// 		return root;
// 	if (key < root->key)
// 		root->left = deleteNode(root->left, key);

// 	else if (key > root->key)
// 		root->right = deleteNode(root->right, key);

// 	else {	
// 		if (root->left == NULL) {
// 			struct node* temp = root->right;
// 			free(root);
// 			return temp;
// 		}
// 		else if (root->right == NULL) {
// 			struct node* temp = root->left;
// 			free(root);
// 			return temp;
// 		}
// 		struct node* temp = minValueNode(root->right);	
// 		root->key = temp->key;		
// 		root->right = deleteNode(root->right, temp->key);
// 	}
// 	return root;
// }
// struct node* search(struct node* root, int key)
// {   
//     if (root == NULL || root->key == key)
//        return root;   
//     if (root->key < key)
//        return search(root->right, key); 
//     return search(root->left, key);
// }
// int findMin(node *root)
//     {      
//         if(root==0)
//      {
//          return INT_MAX;
//      }
//        int res=root->key;
//        int left=findMin(root->left);
//        int right=findMin(root->right);
//        if(left<res)
//        {
//            res=left;
//        }
//        if(right<res)
//        {
//            res=right;
//        }
//        return res;
//     }
// int findMax(node* root)
// {   
//     if (root == 0)
//         return INT_MIN;   
//     int res = root->key;
//     int lres = findMax(root->left);
//     int rres = findMax(root->right);
//     if (lres > res)
//         res = lres;
//     if (rres > res)
//         res = rres;
//     return res;
// }
// int count = 0;
// node* kthSmallest(node* root, int k)
// {   
//     if (root == 0)
//         return 0; 
//     node* left = kthSmallest(root->left, k);    
//     if (left != 0)
//         return left;    
//     count++;
//     if (count == k)
//         return root;    
//     return kthSmallest(root->right, k);
// }
// int main()
// {	
// 	struct node* root = NULL;
// 	root = insert(root, 5);
// 	root = insert(root, 3);
// 	root = insert(root, 345);
// 	root = insert(root, 297);
// 	root = insert(root, 243);
// 	root = insert(root, 6);
// 	root = insert(root, 80);
// 	printf("Inorder traversal of the given tree \n");
// 	inorder(root);
// 	printf("\nDelete 20\n");
// 	root = deleteNode(root, 20);
// 	printf("Inorder traversal of the modified tree \n");
// 	inorder(root);
// 	printf("\nDelete 30\n");
// 	root = deleteNode(root, 30);
// 	printf("Inorder traversal of the modified tree \n");
// 	inorder(root);
// 	printf("\nDelete 50\n");
// 	root = deleteNode(root, 50);
// 	printf("Inorder traversal of the modified tree \n");
// 	inorder(root);
//     struct node * l = search(root , 40);
//     printf("\nmin element %d\n" , findMin(root));
//     printf("max element %d \n" , findMax(root));
//     printf("%d KTH smallest element %d" ,2,kthSmallest(root , 2)->key  );
// 	return 0;
// }



#include <iostream>
using namespace std;

class node 
{
	public:
	int data;
	node* left;
	node* right;
	node(int data)
	{
		this->data = data;
		this->left =NULL;
		this->right = NULL;

	}
};


node* insertintobst(node* root , int data)
{
	if(root==NULL)
	{
		root = new node(data);
		return root;
	}

	if(data>root->data)
	{
		root->right = insertintobst(root->right,data);
	}
	else{
		root->left = insertintobst(root->left,data);
	}
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

void takeinput(node* &root )
{
	int data;
	cin>>data;
	while(data!=-1)
	{
		root=insertintobst(root,data);
		cin>>data;
	}
}


bool search(node* root , int d)
{
	if(root == NULL)
	{
		return false;
	}

	if (root->data = d)
	{
		return true;
	}

	if(root->data>d)
	{
		return search(root->left,d);
	}
	else{
		return search(root->right,d);
	}
}

int minvalue(node* root)
{
	node* tmp = root;
	while(tmp->left!=NULL)
	{
		tmp = tmp->left;
	}
	return tmp->data;

}
int maxvalue(node* root)
{
	node* tmp = root;
	while(tmp->right!=NULL)
	{
		tmp = tmp->right;
	}
	return tmp->data;
}

node* deletefrombst(node* root, int val)
{
	if(root==NULL)
	{
		return root;
	}
	if(root->data == val)
	{
		if(root->left==NULL && root->right==NULL)
		{
			
			delete root;
			return NULL;
		}
		if(root->left!=NULL && root->right==NULL)
		{
			node* tmp = root->left;
			delete root;
			return tmp;
		}
		if(root->left==NULL && root->right!=NULL)
		{
			node* tmp = root->right;
			delete root;
			return tmp;
		}


		
	}
}

int solve(node* root , int &i , int k)
{
	//i=0;
	if (root==NULL)
	{
		return -1;
	}
	int left = solve(root->left , i ,k);
	
		if(left!=-1)
		{
			return left;
		}
		i++;
		if(i==k)
		{
			return root->data;
		}
		return solve(root->right,i,k);
	
	
}
int kthsmallest(node* root , int k,int i)
{
	//int i=0;
	int ans  = solve(root , i , k);
	return ans;
}

int main()
{
	node* root = NULL;
	cout<<"enter data to create bst"<<endl;
	takeinput(root);
	cout<<"printing the inorder bst "<<endl;
	inorder(root);
	cout<<"printing the preorder bst "<<endl;
	preorder(root);
	cout<<"printing the postorder bst "<<endl;
	postorder(root);
	cout<<search(root,297)<<endl;
	cout<<minvalue(root)<<endl;
	cout<<maxvalue(root)<<endl;
	cout<<kthsmallest(root,3,1);


	return 0;

}