// Circular queue
#include<iostream>
using namespace std;

int queue[5],n=5,front=-1,rear=-1;

void enqueue(){
	if(front==-1 && rear==-1){
		if(front==-1)
		{
			front=0;
		}
		int val;
		cout<<"\tInsert element: ";
		cin>>val;
	    rear=(rear+1)%n;                
		queue[rear]=val;
	}
	
	else if(((rear+1)%n)==front){
		cout<<"Queue overflow\n";
	}
	else
	{
		int val;
		cout<<"\tInsert value: ";
		cin>>val;
		rear=(rear+1)%n;
		queue[rear]=val;
	}
}
void dequeue(){
		if(front==-1 && rear==-1){
	    cout<<"Queue underflow\n";
	}
	else if(front==rear){
		cout<<"\tDeleted element: "<<queue[front]<<"\n";
		front=rear=-1;
	}
	else
	{
		cout<<"\tDeleted value: "<<queue[front]<<"\n";
		front=(front+1)%n;    //front++ replaced
	}
}
void display(){       
	if(front==-1){
		cout<<"\tQueue is empty\n";
	}
	else
	{
		cout<<"\tQueue elements are: ";
		int i;
		i=front;
	    while(i!=rear){
			cout<<queue[i]<<"  ";
			i=(i+1)%n;
		}
		cout<<queue[rear];
		cout<<"\n";
	}
}
int main()
{
   cout<<"---------------------\n";
   cout<<"Circular Queue\n";
   cout<<"---------------------\n";
   int ch;
   cout<<"'1' to insert element\n";
   cout<<"'2' to delete element\n";
   cout<<"'3' to display elements\n";
   cout<<"'4' to Exit\n";
   cout<<"------------------------\n";
   do{
   	
   cout<<"\nEnter what do you want ? ";
   cin>>ch;
   
   switch(ch)
   {
     case 1:
	 {
	 enqueue();
	 break;
     }
     case 2:
     	{
     	 dequeue();
     	 break;
		}
		case 3:
			{
			 display();
			 break;
			}
			case 4:
				{
				 cout<<"\tExited";
				 break;
				}
				default:
				{
				 cout<<"Invalid number\n";
				 cout<<"Please try again\n";
				}
   }
}
  while(ch!=4);
  return 0;
}
