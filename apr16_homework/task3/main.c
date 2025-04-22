#include <stdio.h>
#include "struct.h"

void func(student info[], int);

void in(student info[], int a){
	for(int i = 0; i < a; ++i){
		printf("Name: ");
		scanf("%s", info[i].name);
		printf("Age: ");
		scanf("%d", &info[i].age);
		printf("Mark: ");
		scanf("%f", &info[i].mark);
	}	
}

int main(){
	int a = 5;
	student info[a];
	in(info, a);
	func(info, a);
}
