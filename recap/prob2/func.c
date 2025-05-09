#include <stdio.h>

int gcd(int a, int b){
	int min;
	int max;
	int res;
	if(a > b){
		min = b;
		max = a;
	}else{
		min = a;
		max = b;
	}

	if(a % min == 0 && b % min == 0){
		res = min;
	}else{
		gcd(--min, max);
	}

	return res;
}
