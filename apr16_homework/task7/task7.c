#include <stdio.h>
#include "main.h"

void size(value num){
	printf("Size of union: %lu bytes(minimum size of the largest member) \n", sizeof(value));
}

int main(){
	value num;
	printf("Integer: ");
	scanf("%d", &num.num1);
	printf("Float: ");
	scanf("%f", &num.num2);
	size(num);
}
