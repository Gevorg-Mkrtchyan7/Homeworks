#include <stdio.h>
#include "struct.h"

void size(value num);

void in(value num){
	printf("Integer: ");
	scanf("%d", &num.num1);
	printf("Float: ");
	scanf("%f", &num.num2);
}

int main(){
	value num;
	in(num);
	size(num);
}
