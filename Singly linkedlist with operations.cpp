#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node*next;
};

int main(){
	// initialize node
	struct node*head;
	struct node*one=NULL;
	struct node*two=NULL;
	struct node*three=NULL;
	
	// allocate memory
	one=new node();
	two=new node();
	three=new node();
	
	// assign data value
	one->data=1;
	two->data=2;
	three->data=3;
	
	// assign next value
	one->next=two;
	two->next=three;
	three->next=NULL;
	head=one;
    
	// insert value at start
	struct node*start;
	start=new node();
	start->data=0;
	start->next=head;
	head=start;
	
	// insert at end
	struct node*end;
	end=new node();
	end->data=4;
	end->next=NULL;
	
	struct node*temp2;
	temp2=head;
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	temp2->next=end;
	
	// delete from start
	head=head->next;
	
	// delete from end
	struct node*temp3;
	temp3=head;
	while(temp3->next->next!=NULL){
		temp3=temp3->next;
	}
	temp3->next=NULL;

    // delete from middle
    struct node*temp4;
    temp4=head;
	int position=1;	
	for(int i=2; i< position; i++) {
    if(temp4->next!=NULL) {
    temp4 = temp4->next;
  }
}
    temp4->next = temp4->next->next;

   // insert at middle
   struct node *newNode;
   newNode = new node();
   newNode->data = 5;

   struct node *temp5;
   temp5 = head;
   int position1=1;
   for(int i=2; i < position1; i++) {
   if(temp5->next != NULL) {
   temp5 = temp5->next;
  }
}
   newNode->next = temp5->next;
   temp5->next = newNode;
   
	// print linklist
	struct node*print;
	print=head;
	while(print!=NULL)
	{
		cout<<print->data<<"  ";
		print=print->next;
	}
}
