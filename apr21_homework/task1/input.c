#include <stdio.h>
#include "struct.h"

void input(Data* data){
	do{
		printf("day: ");
		scanf("%d", &(data->day));
	}while(data->day < 0 || data->day > 31);
	
	do{
		printf("month: ");
		scanf("%d", &(data->month));
	}while(data->month < 0 || data->month > 12);
		
	do{
		printf("year: ");
		scanf("%d", &(data->year));
	}while(data->year < 0);
} 
