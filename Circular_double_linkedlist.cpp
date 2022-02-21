// Circular double linkedlist

#include<iostream>
using namespace std;

struct node{
	int data;
	struct node*next;
	struct node*prev;
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
// insert at begin
void insert_begin(struct node**last){
	struct node*temp=(*last);
	struct node*newnode;
	newnode=new node();
	int val;
	cout<<"Insert: ";
	cin>>val;
	newnode->data=val;
	newnode->prev=temp;
	newnode->next=temp->next;
	temp->next=newnode;
}
// insert at middle
void insert_mid(struct node**last){
	int pos,i=0;
	cout<<"Insert after: ";
	cin>>pos;
	struct node*temp=(*last)->next;
	while(temp->next!=(*last)){
		if(i==pos){
		int val;
	    cout<<"Insert: ";
	    cin>>val;
		struct node*newnode;
	    newnode=new node();
	    newnode->data=val;
	    newnode->next=temp->next;
	    temp->next->prev=newnode;
	    newnode->prev=temp;
	    temp->next=newnode;
	    //newnode->next->prev=newnode;
		}
		i++;
		temp=temp->next;
	}
}
// insert at last
void insert_end(struct node**last){
	struct node*temp=(*last);
	int val;
	cout<<"Insert: ";
	cin>>val;
	struct node*newnode;
	newnode=new node();
	newnode->data=val;
	newnode->next=temp->next;
	newnode->prev=temp;
	temp->next=newnode;
	(*last)=newnode;
}
// delete from beginning
void del_begin(struct node**last){
	struct node*temp=(*last);
	temp->next=temp->next->next;
}
// delete after a specific position
void del_mid(struct node**last){
	struct node*temp=(*last)->next;
	int pos,i=0;
	cout<<"Delete after: ";
	cin>>pos;
	while(temp->next!=(*last)){
		if(i==pos){
		temp->next->next->prev=temp;
	    temp->next=temp->next->next;	
		}
		i++;
		temp=temp->next;
	}
}
// delete from end
void del_end(struct node**last){
	struct node*temp=((*last)->next);
	while(temp->next!=(*last)){
		temp=temp->next;
	}
//	temp->prev->next=NULL;
	temp->next->next->prev=temp;
	temp->next=temp->next->next;
	(*last)=temp;
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
	
	// data
	one->data=1;
	two->data=2;
	three->data=3;
	four->data=4;
	
	// next
	one->next=two;
	two->next=three;
	three->next=four;
	four->next=one;
	
	// prev
	one->prev=four;
	two->prev=one;
	three->prev=two;
	four->prev=three;
	
	last=four;
	
	// under construction
	int ch;
	cout<<"\t------------------------------------------\n";
	cout<<"\tDoubly linked list\n";
	cout<<"\t------------------------------------------\n";
	cout<<"\t1 (Print linkedlist elements)\n";
	cout<<"\t2 (Reverse linkedlist elements)\n";
	cout<<"\t3 (Insert value at the beginning)\n";
	cout<<"\t4 (Insert value after a specific position)\n";
	cout<<"\t5 (Insert value at the end)\n";
	cout<<"\t6 (Delete beginning value)\n";
	cout<<"\t7 (Delete after a specific position)\n";
	cout<<"\t8 (Delete end value)\n";
	cout<<"\t------------------------------------------\n";
	while(true){
	cout<<"-----------------\n";
	cout<<"Enter (>_<) ? ";
	cin>>ch;
	cout<<"-----------------\n";
	
	switch(ch){
		case 1:
			{
				printlist(last);
				cout<<endl;
				break;
			}
			case 2:
				{
//					reverse(&last);
					printlist(last);
					break;
				}
				case 3:
					{
						insert_begin(&last);
						cout<<"Inserted...";
						cout<<endl;
						break;
					}
					case 4:
						{
							insert_mid(&last);
							cout<<"Inserted...";
							cout<<endl;
							break;
						}
						case 5:
							{
								insert_end(&last);
								cout<<"Inserted...";
								cout<<endl;
								break;
							}
							case 6:
								{
									del_begin(&last);
									cout<<"Deleted...";
									cout<<endl;
									break;
								}
								case 7:
								    {
									    del_mid(&last);
									    cout<<"Deleted...";
									    cout<<endl;
									    break;
								    }
								    case 8:
								    	{
								    		del_end(&last);
								    		cout<<"Deleted...";
								    		cout<<endl;
								    		break;
										}
										
								
								
	} // switch
  } // while
} // main
