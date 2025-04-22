#include <stdio.h>
#include "struct.h"

void tp(car info[], int i){
	printf("%s, %s, %d, %f \n", info[i].brand, info[i].model, info[i].year, info[i].price);
}
