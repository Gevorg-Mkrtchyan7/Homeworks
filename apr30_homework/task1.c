#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 0;
	scanf("%d", &a);
	int* p = (int*) malloc(a * sizeof(int));
	if(p == NULL){
		printf("Error \n");
		return 0;
	}
	printf("Enter a %d numbers \n", a);
	for(int i = 0; i < a; ++i){
		scanf("%d", &p[i]); 
	}
	for(int i = 0; i < a; ++i){
		printf("%d ", p[i]);
	} 
	printf("\n");
	free(p);
}
