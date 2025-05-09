#include <stdio.h>
#include "struct.h"

struc input(){
	struc info;
	int a;
	printf("Type(1 = integer, 2 = float, 3 = string): ");
	scanf("%d", &a); 
	info.typ = (type)a;
	printf("Enter a value: ");
	switch(info.typ){
		case INT:
			scanf("%d", &info.enter.i);
			break;
		case FLOAT:
			scanf("%f", &info.enter.f);
			break;
		case STR:
			scanf("%s", info.enter.str);
			break;
		default:
			printf("Error \n");
	}
	printf("Enter name: ");
	scanf("%s", info.name);
	return info;
}
