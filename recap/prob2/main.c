#include <stdio.h>

int gcd(int, int);

int main(){
	int n1, n2;
	scanf("%d", &n1);
	scanf("%d", &n2);
	int res = gcd(n1, n2);
	printf("%d \n", res);
}
