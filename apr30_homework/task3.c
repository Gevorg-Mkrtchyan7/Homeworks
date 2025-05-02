#include <stdio.h>
#include <stdlib.h>

int main(){
	int size = 0;
	scanf("%d", &size);
	float* p = (float*)calloc(size, size * sizeof(float));
	if(p == NULL){
		printf("Error \n");
		return 0;
	}
	printf("Enter a 5 numbers \n");
	for(int i = 0; i < size; ++i){
		scanf("%f", &p[i]);
	}
	for(int i = 0; i < size; ++i){
		printf("%f ", p[i]);
	}
	printf("\n");
	free(p);
}
