#include <stdio.h>
#include "main.h"

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
