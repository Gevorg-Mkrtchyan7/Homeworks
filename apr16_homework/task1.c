#include <stdio.h>

typedef struct
{
	char brand[20];
	char model[20];
	int year;
	float price;
} car;

void func(car info[]){
	for(int i = 0; i < 3; ++i){
		printf("%s", info[i].brand);
		printf("  %s,", info[i].model);
		printf("  %d,", info[i].year);
		printf("  %f$ \n", info[i].price);	
	}
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
