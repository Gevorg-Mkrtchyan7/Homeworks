#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	int add;
	printf("Enter a size of array \n");
	scanf("%d", &size);
	int* p = (int*)calloc(size, size * sizeof(int));
	
	if(p == NULL){
		printf("Error \n");
		return 0;
	}

	printf("Enter a %d numbers \n", size);
	for(int i = 0; i < size; ++i){
		scanf("%d", &p[i]);
	}

	printf("Enter how much you whant to increase a array \n");
	scanf("%d", &add);
	
	int new_size = size + add;

	p = realloc(p, new_size * sizeof(int));
	
	printf("Enter new numbers \n");
	
	for(int i = size; i < size + add; ++i){
		scanf("%d", &p[i]);
	}
	
	for(int i = 0; i < size + add; ++i){
		printf("%d ", p[i]);
	}
	printf("\n");
	
	free(p);
}
