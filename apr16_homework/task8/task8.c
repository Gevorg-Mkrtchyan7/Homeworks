#include <stdio.h>
#include "main.h"

int main(){
	value a;
	printf("Integer: ");
	scanf("%d", &a.num1);
	size(a);
	printf("Float: ");
	scanf("%f", &a.num2);
	size(a);
	printf("Char: ");
	scanf(" %c", &a.ch);
	size(a);
	printf("Size of union: %lu bytes(minimum size of the largest member) \n", sizeof(value));

}	
