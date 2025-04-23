#include <stdio.h>

int func(int);

int main(){
	int a = 2;
	int res = func(a);
	printf("%d \n", a);
	while(1){
		printf("Enter 1-next, 2-exit: ");
		scanf("%d", &a);
		if(a == 1){
			res = func(res);
			printf("%d \n", res);
		}else if(a == 2){
			return 0;
		}else{
			printf("You entered an wrong number \n");
		}
	}
}
