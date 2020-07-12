#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, *pi;
	float f, *pf;
	pi = malloc(sizeof(int));
	pf = malloc(sizeof(float));
	*pi = 1024;
	*pf = 3.14;
	printf("int : %d, float : %f", *pi, *pf);
	free(pi);
	free(pf);
}