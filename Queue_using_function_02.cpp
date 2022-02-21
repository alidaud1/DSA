// Queue Operations
#include<iostream>
using namespace std;

int queue[10],n=10,front=-1,rear=-1;

void enqueue(){
	if(rear==n-1){
		cout<<"\tQueue overflow\n";
	}
	else
	{
		int val;
		if(front==-1)
		front=0;
		cout<<"\tValue inserted is: ";
		cin>>val;
		cout<<endl;
		rear++;
		queue[rear]=val;
	}
}
void dequeue(){
	if(front==-1 || front>rear){
		cout<<"\tQueue underflow\n";
	}
	else
	{
		cout<<"\tValue deleted is: "<<queue[front];
		cout<<endl;
		front++;
	}
}
void display(){
	if(front==-1 || front>rear){
		cout<<"\tQueue is empty\n";
	}
	else
	{
		cout<<"\tQueue elements are: ";
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<"  ";
		}
	}
}
int main()
{
	int ch;
	cout<<"-------------------------\n";
	cout<<"     Queue Operations    \n";
	cout<<"-------------------------\n";
	cout<<"\t1 : to enqueue\n";
	cout<<"\t2 : to dequeue\n";
	cout<<"\t3 : to display\n";
	cout<<"\t4 : to exit\n\n";
	do{
		
	cout<<"\nEnter operation:  ";
	cin>>ch;
	cout<<endl;
	
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
						cout<<endl;
						break;
					}
					case 4:
						{
							cout<<"\tSuccessfully exit\n";
						}
						default:
							{
								cout<<"\tInvalid option\n";
							}
	}
  }
  while(ch!=4);
  return 0;
}

