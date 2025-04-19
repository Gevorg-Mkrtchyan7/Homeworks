#include <stdio.h>

int a;

int main(){
	static int b;
	int c;
	printf("%p, %p, %p \n", &a, &b, &c);	
}
