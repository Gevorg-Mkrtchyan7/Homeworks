#include <stdio.h>
#include "main.h"

void in(car info[], int a){
	for(int i = 0; i < a; ++i){
		printf("Car %d: ", i + 1);
		fgets(info[i].brand, 30, stdin);
		scanf("%d", &info[i].price);
		fflush(stdin);
	}
}

int main(){
	int a = 2;
	car info[a];
	in(info, a);
	func(info, a);
}

