#include <stdio.h>
#include "struct.h"

void size(value num){
	printf("Size of union: %lu bytes(minimum size of the largest member) \n", sizeof(value));
}
