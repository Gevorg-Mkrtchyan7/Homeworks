#include <stdio.h>
#include "struct.h"

void tp(student info[], int index){
	printf("%s, %d, %f \n", info[index].name, info[index].age, info[index].mark);
}
