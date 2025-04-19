#include <stdio.h>
#include "main.h"

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

