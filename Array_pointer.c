#include<stdio.h>

int **make2dArr(int row, int col);

int main(){
	int ** arr;
	arr = make2dArr(5,10);
}

int **make2dArr(int row, int col){
	int **x, i;
	
	malloc(x,row *sizeof(*x));
	
	for(i = 0; i < row; i++){
		MALLOC(x[i], col * sizeof(**x));
	}
}