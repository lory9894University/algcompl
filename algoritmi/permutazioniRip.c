#include <stdio.h>
#define VECTORSIZE 3

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

int * copy_array(int array[], int size){
	int copy[VECTORSIZE];
	for (int i=0 ; i< size ; i++)
		copy[i]=array[i];
}

void permutations(int values[], int j, int size){
	if (j == size-1){
		print_array(values,size);
		return;
	}
	int *solution = copy_array(values, size);
	for (int i=0; i < size; i++){
		swap(solution, i,j);
		permutations(solution, j + 1, size);
		swap(solution, i,j);
	}

}


int main(int argc, char **argv) {
	int values[VECTORSIZE]={1,2,3};
	permutations(values, 0, VECTORSIZE);
	return 0;
}

