#include <stdio.h>

typedef enum
{
	elect = 1,
	food = 2,
	cloth = 3,
} categories;

typedef struct
{
	char name[20];
	categories category;
	float price;
} product;

void func(product info[]){
	int index = 0;
	for(int i = 0; i < 3; ++i){
		if(info[i].category == 2){
			index = i;
			printf("%s,", info[index].name);
			printf(" %u,", info[index].category);
			printf(" $%f \n", info[index].price);
		}
	}
}

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

