#include <stdio.h>

typedef struct
{
	char name[30];
	int age;
	float mark;
} student;

void func(student info[]){
	int best = info[0].mark;
	int index = 0;
	for(int i = 1; i < 5; ++i){
		if(best < info[i].mark){
			best = info[i].mark;
			index = i;
		}
	}
	printf("%s,", info[index].name);
	printf(" %d,", info[index].age);
	printf(" %f \n", info[index].mark);
}

int main(){
	student info[5];
	for(int i = 0; i < 5; ++i){
		printf("Name: ");
		scanf("%s", info[i].name);
		printf("Age: ");
		scanf("%d", &info[i].age);
		printf("Mark: ");
		scanf("%f", &info[i].mark);
	}	
	func(info);
}
