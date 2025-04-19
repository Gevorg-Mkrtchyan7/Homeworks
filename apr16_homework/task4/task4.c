#include <stdio.h>
#include "main.h"

int main(){
	product info[3];
	for(int i = 0; i < 3; ++i){
		printf("Name: ");
		scanf("%s", info[i].name);
		printf("Category(1 = electronics, 2 = food, 3 = clothing): ");
		scanf("%u", &info[i].category);
		printf("Price: ");
		scanf("%f", &info[i].price);
	}	
	func(info);
}

