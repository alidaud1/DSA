// Double linkedlist
// Insertion operations complete
// deletition operations complete
// reverse print complete
// searching complete 
// sorting complete
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node*next;
	struct node*prev;
};

void reverse(node **head)  
{  
    node *temp = NULL;  
    node *current = *head;  
      
    /* swap next and prev for all nodes of  
    doubly linked list */
    while (current != NULL)  
    {  
        temp = current->prev;  
        current->prev = current->next;  
        current->next = temp;              
        current = current->prev;  
    }    
       *head = temp->prev;  
}

// sorting  
void bubble_sort(struct node*head){
	struct node*ptr; // initialize in outer loop
	struct node*ptr1=NULL;
	int swap; //outer loop
	if(head==NULL){
		cout<<"Linkedlist empty\n";
	}
	else
	{
		do{
			ptr=head;
			swap=0;
			while(ptr->next!=ptr1){
				if(ptr->data > ptr->next->data){
					int temp;
					temp=ptr->data;
					ptr->data=ptr->next->data;
					ptr->next->data=temp;
					
					swap=1;
				}
				ptr=ptr->next; // increment
			}
			ptr=ptr1; //decrement
		}
		while(swap);
	}
}

// insert at begin
void insert_begin(struct node**head){
	int val;
	cout<<"Insert: ";
	cin>>val;
	struct node*newnode;
	newnode=new node();
	newnode->data=val;
	newnode->prev=NULL;
	newnode->next=(*head);
	(*head)->prev=newnode;
	(*head)=newnode;
}

// insert at middle
void insert_mid(struct node**head){
	int pos,i=0;
	cout<<"Insert after: ";
	cin>>pos;
	struct node*temp3=(*head);
	while(temp3->next!=NULL){
		if(i==pos){
		int val;
	    cout<<"Insert: ";
	    cin>>val;
		struct node*newnode;
	    newnode=new node();
	    newnode->data=val;
	    newnode->next=temp3->next;
	    temp3->next->prev=newnode;
	    newnode->prev=temp3;
	    temp3->next=newnode;
	    //newnode->next->prev=newnode;
		}
		i++;
		temp3=temp3->next;
	}
}

// insert at last
void insert_end(struct node**head){
	struct node*temp2=(*head);
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	int val;
	cout<<"Insert: ";
	cin>>val;
	struct node*newnode;
	newnode=new node();
	newnode->data=val;
	newnode->next=NULL;
	newnode->prev=temp2;
	temp2->next=newnode;
	temp2=newnode;
}

// delete from beginning
void del_begin(struct node**head){
	struct node*temp=(*head);
	temp->next->prev=NULL;
	(*head)=temp->next;
}

// delete after a specific position
void del_mid(struct node**head){
	struct node*temp=(*head);
	int pos,i=0;
	cout<<"Delete after: ";
	cin>>pos;
	while(temp->next!=NULL){
		if(i==pos){
		temp->next->next->prev=temp;
	    temp->next=temp->next->next;	
		}
		i++;
		temp=temp->next;
	}
}

// delete from end
void del_end(struct node**head){
	struct node*temp=(*head);
	while(temp->next!=NULL){
		temp=temp->next;
	}
//	temp->prev->next=NULL;
	temp=temp->prev;
	temp->next=NULL;
}

// searching in linkedlist
void search(struct node*head){
	int find;
	cout<<"Enter value to be found: ";
	cin>>find;
	struct node*temp;
	temp=head;
	while(temp!=NULL){
		if(temp->data==find){
			cout<<"Founded: "<<temp->data;
		}
		temp=temp->next;
	}
	cout<<endl;
}

// print
void printlist(struct node*current){
	
	while(current!=NULL){
		cout<<current->data<<"  ";	
		current=current->next;
	}
	cout<<endl;
}

int main()
{
	// initialize
	struct node*head;
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
	four->next=NULL;
	
	// prev
	one->prev=NULL;
	two->prev=one;
	three->prev=two;
	four->prev=three;
	
	head=one;
	
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
	cout<<"\t9 (Search a value in linkedlist)\n";
	cout<<"\t10(Sort the linkedlist in Ascending Order)\n";
	cout<<"\t     (Press 0 to exit)\n";
	cout<<"\t------------------------------------------\n";
	
	do {
	cout<<"-----------------\n";
	cout<<"Enter (>_<) ? ";
	cin>>ch;
	cout<<"-----------------\n";
	
	switch(ch){
		case 1:
			{
				printlist(head);
				break;
			}
			case 2:
				{
					reverse(&head);
					printlist(head);
					break;
				}
				case 3:
					{
						insert_begin(&head);
						cout<<"Inserted...";
						cout<<endl;
						break;
					}
					case 4:
						{
							insert_mid(&head);
							cout<<"Inserted...";
							cout<<endl;
							break;
						}
						case 5:
							{
								insert_end(&head);
								cout<<"Inserted...";
								cout<<endl;
								break;
							}
							case 6:
								{
									del_begin(&head);
									cout<<"Deleted...";
									cout<<endl;
									break;
								}
								case 7:
								    {
									    del_mid(&head);
									    cout<<"Deleted...";
									    cout<<endl;
									    break;
								    }
								    case 8:
								    	{
								    		del_end(&head);
								    		cout<<"Deleted...";
								    		cout<<endl;
								    		break;
										}
										case 9:
											{
												search(head);
												break;
											}
											case 10:
												{
													bubble_sort(head);
													cout<<"Sorted...";
													cout<<endl;
													break;
												}
												default:
													{ if(ch!=0){
														cout<<"Invalid choice\n";
													    break;
													}
												     cout<<"Exited successfully";
										      	 	}
										
								
	} // switch
  }
  while(ch!=0); // do while
} // main
