#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int size = 0;
	scanf("%d", &size);
	char* p = (char*)malloc(size * sizeof(char));
	if(p == NULL){
		printf("Error \n");
		return 0;
	}
	scanf("%s", p);	
	printf("%s ", p);
	printf("%lu \n", strlen(p));
	free(p);
}	
