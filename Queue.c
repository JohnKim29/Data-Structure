#include<stdio.h>

#define MAX_QUEUE_SIZE 10
#define TRUE 1
#define FALSE 0


char is_Empty();
char is_Full();
void enqueue(char item);
char dequeue();
void queue_Print();


char queue[MAX_QUEUE_SIZE];
int head = -1, tail= -1;

void main(){
	queue_Print();
	
	enqueue('N');
	queue_Print();
	enqueue('A');
	queue_Print();
	enqueue('K');
	queue_Print();
	
	dequeue();
	queue_Print();
	dequeue();
	queue_Print();
	dequeue();
	queue_Print();
}

char is_Empty(){
	if(tail == head){
		//printf("\nis_Empty");
		return TRUE;
	}
	else{
		//printf("\nis_not_Empty");
		return FALSE;
	}
}

char is_Full(){
	if(tail == MAX_QUEUE_SIZE-1){
		//printf("\nis_Full");
		return TRUE;
	}
	else
		//printf("\nis_not_Full");
		return FALSE;
}

void enqueue(char item){
	if(is_Full())
		printf("\nerr : queue is full");
	else{
		tail = tail +1;
		queue[tail] = item;
	}
	
}

char dequeue(){
	if(is_Empty())
		printf("err queue is empty");
	else{
		head = head + 1;
		printf("\n");
		printf("\ndequeue.%d : %c",head,queue[head]);
		return queue[head];
	}
		
}
void queue_Print(){
	int i;
	
	printf("\n");
	for(i=head + 1; i < tail + 1; i++){
		printf("\nqueue.%d : %c ",i,queue[i]);
	}
}
