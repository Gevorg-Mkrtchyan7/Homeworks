#include <stdio.h>
#include "main.h"

void func(car info[], int a){
	for(int i = 0; i < a; ++i){
		printf("%s %s, %d, %f \n", info[i].brand, info[i].model, info[i].year, info[i].price);
	}
}

int main(){
	int a = 3;
	car info[a];
	for(int i = 0; i < a; ++i){
		printf("Brand: ");
		scanf("%s", info[i].brand);
		printf("Model: ");
		scanf("%s", info[i].model);
		printf("Year: ");
		scanf("%d", &info[i].year);
		printf("Price: ");
		scanf("%f", &info[i].price);
	}	
	func(info, a);
}
