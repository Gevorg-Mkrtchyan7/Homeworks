#include <stdio.h>
#include "main.h"

int main(){
	int a = 5;
	student info[a];
	for(int i = 0; i < a; ++i){
		printf("Name: ");
		scanf("%s", info[i].name);
		printf("Age: ");
		scanf("%d", &info[i].age);
		printf("Mark: ");
		scanf("%f", &info[i].mark);
	}	
	func(info, a);
}
