#include <stdio.h>
#define VECTORSIZE 4

void swap(int vector[], int a, int b){
	int temp= vector[a];
	vector[a] = vector[b];
	vector[b]=temp;
}

void print_array(int values[], int end){
	printf("[ ");
	for (int i = 0; i < end; i++){
		printf("%d ", values[i]);
	}
	printf("]\n");
}

void permutations(int values[], int j, int size){
	if (j == size-1){
		print_array(values,size);
		return;
	}
	for (int i=j; i < size; i++){
		swap(values, i,j);
		permutations(values, j + 1, size);
		swap(values, i,j);
	}

}


int main(int argc, char **argv) {
	int values[VECTORSIZE]={1,2,3,4};
	for (int i=0 ; i <= VECTORSIZE; i++)
		permutations(values, 0, i);
	return 0;
}

