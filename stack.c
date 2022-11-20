#include<stdio.h>
#include<stdlib.h>

void push(int stack[],int data, int* top){
	if(*top>=10){
		printf("overflow");
	}
	else 
	stack[++*top]=data;
}

void pop(int stack[], int* top){
	if(*top==-1){
		printf("stck uderflows\n");
	}
	else 
	printf("deleted element is %d\n",stack[*top]);
	(*top)--;
}

void peek(int stack[], int top){
    if(top==-1){
        printf("stack underflow");
    }
    else printf("top element =%d\n",stack[top]);
}
void display(int stack[], int top){
	int i=top;
	for(;i>=0;i--){
		printf("%d\n",stack[i]);
	}
}

int main(){
	int n=10;
	int top=-1;
	int stack[n];
	push(stack,89,&top);
	push(stack,8,&top);
	push(stack,9,&top);
	push(stack,80,&top);
	pop(stack,&top);
	peek(stack,top);
	pop(stack,&top);
	peek(stack,top);
	display(stack,top);
	return 0;
}
