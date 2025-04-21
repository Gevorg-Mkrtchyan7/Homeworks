#include <stdio.h>
#include "main.h"

void in(book info[], int a){
	for(int i = 0; i < a; ++i){
		printf("Title: ");
		fgets(info[i].title, 50, stdin);
		printf("Author: ");
		fgets(info[i].author, 30, stdin);
		printf("Year: ");
		scanf("%d", &info[i].year);
		fflush(stdin);
	}
}

int main(){
	int a = 4;
	book info[a];
	in(info, a);
	func(info, a);
}

