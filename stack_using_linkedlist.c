/*Stack using Linked list*/

#include<stdio.h>
#include<conio.h>

/*creation of new datatype node*/
struct node
{
int info;
struct node *next;	
};

struct node *start=NULL;


/*create node function return the address of a node*/
struct node *create_node()
{
	struct node *temp;
	int data;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the information\n");
	scanf("%d",&data);
	temp->info=data;
	temp->next=NULL;
	return temp;
}


/*Function to push the element into the stack*/
void push()
{
	struct node *temp;
	temp=create_node();
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
	temp->next=start;
	start=temp;	
	}
}


// Popped operation on the stack;
void pop()
{
	struct node *temp;
	int info;
    if(start==NULL)
	{
		printf("Stack is empty\n");
		return;
	}
		temp=start;
		info=start->info;
		start=start->next;
		free(temp);
		printf("Popped element is = %d",info);
}


//Peek fuction to see the first element of the stack;
void peek()
{
	if(start==NULL)
	{
		printf("stack is empty\n");
		return;
	}
	printf("Peeked element is = %d",start->info);
}

int count()
{
	int count=0;
	struct node *ptr;
	if(start==NULL)
	{
		return count;
	}
	ptr=start;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}

void display()
{
	struct node * ptr;
	if(start==NULL)
	{
		printf("Stack is empty\n");
		return;
	}
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
}
// Choice function to choose our choice;
void choice()
{
int k;
while(1)
{
system("cls");
printf("1.push\n2.pop\n3.peek the element\n4.length\n5.display\n6.exit");
printf("\nEnter your choice\n");
scanf("%d",&k);
switch(k)
{
case 1:
push();
getch();
break;
case 2:
pop();
getch();
break;
case 3:
peek();
getch();
break;
case 4:
printf("Length of the stack\n%d",count());
getch();
break;
case 5:
display();
getch();
break;
case 6:
exit(0);
break;
default:
printf("Wrong choice\n");
}
}
}


// Main function to implement all the operations;
int main()
{
	choice();
	getch();
	return 0;
}
