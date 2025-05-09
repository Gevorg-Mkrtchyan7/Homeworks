#include <stdio.h>
#include "struct.h"

void func(product info[], int);

void input(product info[], int a){
	for(int i = 0; i < a; ++i){
		printf("Name: ");
		scanf("%s", info[i].name);
		printf("Category(1 = electronics, 2 = food, 3 = clothing): ");
		scanf("%u", &info[i].category);
		printf("Price: ");
		scanf("%f", &info[i].price);
	}
}

int main(){
	int a = 3;
	product info[a];
	input(info, a);
	func(info, a);
}
