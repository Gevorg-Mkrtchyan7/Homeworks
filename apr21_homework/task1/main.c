#include <stdio.h>
#include "struct.h"

void input(Data* data);
int calc(Data* data1, Data* data2);

int main(){
	Data data1, data2;
	printf("Enter first data \n");		
	input(&data1);
	printf("Enter second data \n");
	input(&data2);
	int res = calc(&data1, &data2);
	printf("The difference in days between two dates is %d days \n", res);
}
