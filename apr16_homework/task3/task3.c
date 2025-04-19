#include <stdio.h>
#include "main.h"

void tp(student info[], int index){
	printf("%s, %d, %f \n", info[index].name, info[index].age, info[index].mark);
}

void func(student info[], int a){
	int best = info[0].mark;
	int index = 0;
	for(int i = 1; i < a; ++i){
		if(best < info[i].mark){
			best = info[i].mark;
			index = i;
		}
	}
	tp(info, index);
}

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
