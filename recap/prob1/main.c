#include <stdio.h>

 char* decimalToBinary(int);

int main(){
	int n = 0;
	scanf("%d", &n);
	char* p = decimalToBinary(n);
	if(p){
	printf("%s \n", p);
	}
}
