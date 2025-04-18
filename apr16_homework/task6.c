#include <stdio.h>
#include <string.h>

typedef struct
{
	char brand[30];
	int price;
} car;

void func(car info[]){
	int expenc = info[0].price;
	int index = 0;
	for(int i = 1; i < 2; ++i){
		if(expenc < info[i].price){
			expenc = info[i].price;
			index = i;
		}
	}
	printf("%s", info[index].brand);
	printf("$%d \n", info[index].price);
}

int main(){
	car info[2];
	for(int i = 0; i < 2; ++i){
		printf("Car %d: ", i + 1);
		fgets(info[i].brand, 30, stdin);
		scanf("%d", &info[i].price);
		fflush(stdin);
	}	
	func(info);
}

