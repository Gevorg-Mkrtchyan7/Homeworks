#include <stdio.h>

typedef struct
{
	char title[50];
	char author[30];
	int year;
} book;

void func(book info[]){
	int old = info[0].year;
	int index = 0;
	for(int i = 1; i < 4; ++i){
		if(old > info[i].year){
			old = info[i].year;
			index = i;
		}
	}
	printf("%s", info[index].title);
	printf("%s", info[index].author);
	printf("%d \n", info[index].year);
}

int main(){
	book info[4];
	for(int i = 0; i < 4; ++i){
		printf("Title: ");
		fgets(info[i].title, 50, stdin);
		printf("Author: ");
		fgets(info[i].author, 30, stdin);
		printf("Year: ");
		scanf("%d", &info[i].year);
		fflush(stdin);
	}	
	func(info);
}

