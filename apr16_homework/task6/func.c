#include <stdio.h>
#include "struct.h"

void func(car info[], int a){
	int expenc = info[0].price;
	int index = 0;
	for(int i = 1; i < a; ++i){
		if(expenc < info[i].price){
			expenc = info[i].price;
			index = i;
		}
	}
	printf("%s$%d \n", info[index].brand, info[index].price);
}

