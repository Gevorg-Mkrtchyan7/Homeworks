#include <stdio.h>

int func();

int main(){
	int n = 0;
	do{
		printf("Enter how much do you eant to call a function: ");
		scanf("%d", &n);
	}while(n < 1);
	
	for(int i = 0; i < n; ++i){
		int a = func();
		printf("%d \n", a);
	}
}
