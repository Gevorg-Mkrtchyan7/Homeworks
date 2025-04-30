#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int size = 100;
	char* p = (char*)malloc(size * sizeof(char));
	fgets(p, size, stdin);
	printf("%s", p);
	printf("%lu \n", strlen(p));
	free(p);
}	
