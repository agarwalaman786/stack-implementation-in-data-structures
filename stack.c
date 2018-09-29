/*Stack implementaion*/
#include<stdio.h>
#include<conio.h>
// It is defining the size of the stack;
#define capacity 10


struct stack
{

int top;  //it is defining the top of the stack;
int array[capacity];
int length;
};

struct stack s1;

void push() // push is used to insert the element in the stack;
{
int number;
s1.length++;
printf("Enter the element which you want to push\n");
scanf("%d",&number);
if(s1.top==capacity-1)
 {
 printf("Stack is full\n");
 }
else
 {
 s1.top++;
 s1.array[s1.top]=number;
 }
}

void pop()     // to remove the last element from the stack;
{
int popped;
 if(s1.top==-1)
  {
   printf("Stack is empty");
   return;
  }
 else
 {
 popped=s1.array[s1.top];
 s1.top--;
 s1.length--;
 printf("Popped Element is:%d",popped);
 return;
 }
}

// Function to define the length of the stack;
void length()
{
	printf("Length of the stack = %d",s1.length);
	getch();
}
void peek()
{
int peeped;
if(s1.top==-1)
{
printf("Stack is empty");
}

else
{
peeped=s1.array[s1.top];
printf("Element is:%d",peeped);
}
}
void display()
{
	int i;
	if(s1.top==-1)
	{
		printf("Stack is empty\n");
		return;
	}
	printf("Elements of the stacks are:\n");
	for(i=0;i<s1.length;i++)
	{
		printf("%d ",s1.array[i]);
	}
}

void choice()
{
int k;
while(1)
{
system("cls");
printf("1.push\n2.pop\n3.peek the element\n4.length\n5.display\n6.exit");
printf("Enter your choice\n");
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
length();
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

int main()
{
s1.top=-1;
s1.length=0;
choice();
getch();
return 0;
}
