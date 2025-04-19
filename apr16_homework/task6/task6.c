#include <stdio.h>
#include "main.h"


void func(car info[], int a){
	int expenc = info[0].price;
	int index = 0;
	for(int i = 1; i < a; ++i){
		if(expenc < info[i].price){
			expenc = info[i].price;
			index = i;
		}
	}
	printf("%s$%d \n", info[index].brand, info[index].price);
}

int main(){
	int a = 2;
	car info[a];
	for(int i = 0; i < a; ++i){
		printf("Car %d: ", i + 1);
		fgets(info[i].brand, 30, stdin);
		scanf("%d", &info[i].price);
		fflush(stdin);
	}	
	func(info, a);
}

