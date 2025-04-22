#include <stdio.h>
#include "struct.h"

void func(product info[], int a){
	int index = 0;
	for(int i = 0; i < a; ++i){
		if(info[i].category == 2){
			index = i;
			printf("%s, %u, $%f \n", info[index].name, info[index].category, info[index].price);
		}
	}
}
