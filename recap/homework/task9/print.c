#include <stdio.h>
#include "struct.h"

void print(struc res){
	printf("%s \n", res.name);
	switch(res.typ){
		case INT:
			printf("%d \n", res.enter.i);
			break;
		case FLOAT:
		 	printf("%f \n", res.enter.f);
			break;
		case STR:
			printf("%s \n", res.enter.str);
			break;
		default:
			printf("Error \n");
	}	
}
