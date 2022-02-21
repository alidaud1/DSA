//Stack data structure
#include<iostream>
using namespace std;
int stack[100],n=100,top=-1;

void push(int val){
	if(top>=n-1){
		cout<<"\tStack is Full\n";
	}
	else
	{
		top++;
		stack[top]=val;
	}
}
void pop(){
	if(top<0){
		cout<<"\tStack is empty\n";
	}
	else
	{
		cout<<"\tValue "<<stack[top]<<" popped.\n";
		top--;
	}
}
void display(){
	if(top>=0){
		cout<<"\tStack elements are : ";
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<" ";
		}
	}
	else
	{
		cout<<"\tStack is empty.\n";
	}
}

int main()
{
	int choice,val;
	cout<<"\t---------------\n";
	cout<<"\t   S T A C K\n";
	cout<<"\t---------------\n";
	cout<<"\t'1' to push\n";
	cout<<"\t'2' to pop\n";
	cout<<"\t'3' to display\n";
	cout<<"\t'0' to Exit\n";
	cout<<"\t---------------\n";
	do{
	cout<<"\tEnter your choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
			cout<<"\tEnter pushed value : ";
			cin>>val;
			cout<<endl;
			push(val);
			break;
		    }
			case 2:
				{
				pop();
				break;
			    }
				case 3:
					{
					 display();
					 cout<<endl;	
					 break;
				    }
				    case 0:
				    	{
				    		cout<<"\tExit\n";
				    		break;
						}
					default:
						{
							cout<<"\tEnter valid number;";
							break;
						}
	}
}
while(choice!=0);
return 0;
}
