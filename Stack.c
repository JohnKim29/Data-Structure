#include<stdio.h>

#define MAX_STACK_SIZE 10
#define TRUE 1
#define FALSE 0

void push(char item);
char is_Empty();
char is_Full();
char pop();
void stack_Print();


char stack[MAX_STACK_SIZE];
int top = -1;

void main(){
	stack_Print();
	
	push('A');
	stack_Print();
	push('C');
	stack_Print();
	push('K');
	stack_Print();
	
	pop();
	stack_Print();
	pop();
	stack_Print();
	pop();
	stack_Print();
}

char is_Empty(){
	if(top == -1){
		//printf("\nis_Empty");
		return TRUE;
	}
	else{
		//printf("\nis_not_Empty");
		return FALSE;
	}
}

char is_Full(){
	if(top == MAX_STACK_SIZE-1){
		//printf("\nis_Full");
		return TRUE;
	}
	else
		//printf("\nis_not_Full");
		return FALSE;
}

void push(char item){
	if(is_Full())
		printf("\nerr : stack is full");
	else{
		top = top +1;
		stack[top] = item;
	}
	
}

char pop(){
	if(is_Empty())
		printf("err stack is empty");
	else{
		top = top - 1;
		printf("\n");
		printf("\npop.%d : %c",top + 1,stack[top+1]);
		return stack[top + 1];
	}
		
}
void stack_Print(){
	int i;
	
	printf("\n");
	for(i=0; i < top + 1; i++){
		printf("\nstack.%d : %c ",i,stack[i]);
	}
}
