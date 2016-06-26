#include<stdio.h>
#define STACKSIZE 10
typedef struct{
	int top;
	int items[STACKSIZE];
}stack; 

void push (stack*, int);
int pop (stack*);

int main()
{
	stack s;
	s.top=-1;
	push(&s,11);
	push(&s,5);
	push(&s,8);
	printf("%d",pop(&s));
}

void push (stack*s, int x)
{
	if (s->top==STACKSIZE-1)
	{
		printf("Stack Overflow");
		exit(1);
	}
	else
	{
	s->items[++(s->top)]=x;
	}
}

int pop(stack*s)
{
	if (s->top==-1)
	{
		printf("Stack Underflow\n");
	}
		else{
	return (s->items[(s->top)--]);
	}
}

