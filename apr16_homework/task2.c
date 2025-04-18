#include <stdio.h>

typedef struct
{
	char brand[20];
	char model[20];
	int year;
	float price;
} car;

void func(car info[]){
	int low_price = info[0].price;
	int i1 = 0;
	int last_year = info[0].year;
	int i2 = 0;
	for(int i = 1; i < 3; ++i){
		if(low_price > info[i].price){
			low_price = info[i].price;
			i1 = i;
		}
		if(last_year < info[i].year){
			last_year = info[i].year;
			i2 = i;
		}
	}
	printf("%s", info[i1].brand);
	printf(" %s,", info[i1].model);
	printf(" %d,", info[i1].year);
	printf(" %f \n", info[i1].price);
	
	printf("%s", info[i2].brand);
	printf(" %s,", info[i2].model);
	printf(" %d,", info[i2].year);
	printf(" %f \n", info[i2].price);
}

int main(){
	car info[3];
	for(int i = 0; i < 3; ++i){
		printf("Brand: ");
		scanf("%s", info[i].brand);
		printf("Model: ");
		scanf("%s", info[i].model);
		printf("Year: ");
		scanf("%d", &info[i].year);
		printf("Price: ");
		scanf("%f", &info[i].price);
	}
	func(info);
}
