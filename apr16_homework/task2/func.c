#include "struct.h"

void tp(car info[], int);

void func(car info[], int a){
	int low_price = info[0].price;
	int i1;
	int last_year = info[0].year;
	int i2;
	for(int i = 1; i < a; ++i){
		if(low_price > info[i].price){
			low_price = info[i].price;
			i1 = i;
		}
		if(last_year < info[i].year){
			last_year = info[i].year;
			i2 = i;
		}
	}
	tp(info, i1);
	tp(info, i2);
}
