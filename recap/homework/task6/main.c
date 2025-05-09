#include <stdio.h>
#include <string.h>

void digraph(char* str);

int main(){
	int size = 0;
	scanf("%d", &size);
	char str[size] = {};
	scanf("%s", str);
	digraph(str);
	printf("%s \n", str);	
}
