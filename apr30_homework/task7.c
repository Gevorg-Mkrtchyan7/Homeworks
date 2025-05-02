#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int y;
	printf("Enter a lines: ");
	scanf("%d", &x);
	printf("Enter a columns: ");
	scanf("%d", &y);
	int** matrix = (int**)malloc(x * sizeof(int));
	if(matrix == NULL){
		printf("Error \n");
		return 0;
	}
	for(int i = 0; i < x; ++i){
		matrix[i] = (int*)malloc(y * sizeof(int));
	}
	printf("Enter a matrix's numbers \n");
	for(int i = 0; i < x; ++i){
		for(int j = 0; j < y; ++j){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\n");
	for(int i = 0; i < x; ++i){
		for(int j = 0; j < y; ++j){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}	
	free(matrix);
}
