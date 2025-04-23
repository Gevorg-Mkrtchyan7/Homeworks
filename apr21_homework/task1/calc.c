#include <stdio.h>
#include "struct.h"

int calc(Data* data1, Data* data2){
	int res = 0;
	res += (data1->year - data2->year) * 365;
	res += (data1->month - data2->month) * 31;
	res += data1->day - data2->day;
	if(res < 0){
		res *= -1;	
	}
	return res;
} 
