#include <stdio.h>
#include <string.h>

char* search(char*, char*);

int main(){
	int size = 30;
	char* str = "Hello ape jan";
	char* s = "Hello";
	char* res = search(str, s);
	printf("%s \n", res);
}
