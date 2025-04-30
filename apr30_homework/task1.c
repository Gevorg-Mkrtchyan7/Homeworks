#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 5;
	int* p = (int*) malloc(5 * sizeof(int));
	printf("Enter a 5 numbers \n");
	for(int i = 0; i < a; ++i){
		scanf("%d", &p[i]); 
	}
	for(int i = 0; i < a; ++i){
		printf("%d ", p[i]);
	} 
	printf("\n");
	free(p);
}
