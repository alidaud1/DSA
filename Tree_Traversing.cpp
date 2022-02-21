//TREE DATA STRUCTURE
// -> Tree traversing
// i)   Inorder traversing
// ii)  preorder traversing
// iii) postorder traversing

#include<iostream>
using namespace std;

// tree node
struct node{
	int data;
	struct node*left;
	struct node*right;
	
	node(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
};

//inorder traversal
void inorder(struct node*Node){
	if(Node==NULL){
		return;
	}
	else
	{
		inorder(Node->left);
		cout<<Node->data<<"  ";
		inorder(Node->right);
	}
} 
// preorder traversal
void preorder(struct node*Node){
	if(Node==NULL){
		return;
	}
	else
	{
		cout<<Node->data<<"  ";
		preorder(Node->left);
		preorder(Node->right);
	}
}
// postorder traversal
void postorder(struct node*Node){
	if(Node==NULL){
		return;
	}
	else
	{
		postorder(Node->left);
		postorder(Node->right);
		cout<<Node->data<<"  ";
	}
}

int main()
{
	struct node*root=new node(1);
	root->left=new node(3);
	root->right=new node(5);
	
	root->left->left=new node(7);
	root->left->right=new node(9);
	
	root->right->left=new node(11);
	root->right->right=new node(13);
	
	cout<<"...Inorder Traversal...\n";
	inorder(root);
	cout<<endl;
	
	cout<<"\n...Preorder Traversal...\n";
	preorder(root);
	cout<<endl;
	
	cout<<"\n...Postorder Traversal...\n";
	postorder(root);
	cout<<endl;
}
