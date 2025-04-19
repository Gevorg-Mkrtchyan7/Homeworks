#include <stdio.h>
#include "main.h"

void func(book info[], int a){
	int old = info[0].year;
	int index = 0;
	for(int i = 1; i < a; ++i){
		if(old > info[i].year){
			old = info[i].year;
			index = i;
		}
	}
	printf("%s%s%d \n", info[index].title, info[index].author, info[index].year);
}
int main(){
	int a = 4;
	book info[a];
	for(int i = 0; i < a; ++i){
		printf("Title: ");
		fgets(info[i].title, 50, stdin);
		printf("Author: ");
		fgets(info[i].author, 30, stdin);
		printf("Year: ");
		scanf("%d", &info[i].year);
		fflush(stdin);
	}	
	func(info, a);
}

