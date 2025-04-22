#include <stdio.h>
#include "struct.h"

void func(car info[], int a){
	for(int i = 0; i < a; ++i){
		printf("%s %s, %d, %f \n", info[i].brand, info[i].model, info[i].year, info[i].price);
	}
}
