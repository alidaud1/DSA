// circular single linkedlist complete
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node*next;
};
// print
void printlist(struct node*last){
    struct node*temp;
	temp=last->next; // means equal to first node	
	while(temp->next!=last->next)
	{
		cout<<temp->data<<"  ";	
		temp=temp->next;
	}
	cout<<temp->data; // print last node
}
int main()
{
	// initialize
	struct node*last;
	struct node*one=NULL;
	struct node*two=NULL;
	struct node*three=NULL;
	struct node*four=NULL;
	
	// allocate memory
	one=new node();
	two=new node();
	three=new node();
	four=new node();
	
	// assign data value
	one->data=1;
	two->data=2;
	three->data=3;
	four->data=4;
	
	// assign next value
	one->next=two;
	two->next=three;
	three->next=four;
	four->next=one;
	
	// last
	last=four;
	printlist(last);
}
