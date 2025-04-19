#include <stdio.h>

extern int a;

int main(){
	auto int b = 5;
	static int c = 4;;
	c++;
	printf("%d, %d, %d \n", a, b, c);
}
