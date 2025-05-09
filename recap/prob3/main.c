#include <stdio.h>

int armstrong(int, int);

int main(){
	int num;
	scanf("%d", &num);
	int count = 0;
	int num2 = num;
	while(num2){
		++count;
		num2 /= 10;
	}
	int a = armstrong(num, count);

	if(a == 1){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
}
