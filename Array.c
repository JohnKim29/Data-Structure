#include<stdio.h>

#define MAX_SIZE 100

float sum (float [], int);

float input [MAX_SIZE], answer;

int main(){
	int i;
	
	for(i=0; i< MAX_SIZE; i++){
		input[i] = i;
	}
	
	answer = sum(input, MAX_SIZE);
	printf("the sum is : %f\n",answer);
	return 0;
}

float sum (float list [], int n){
	int i;
	float tempsum = 0;
	for(i=0;i<n;i++){
		tempsum = tempsum + list[i];
		
	}
	
	return tempsum;
}