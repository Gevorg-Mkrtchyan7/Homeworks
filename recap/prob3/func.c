#include <stdio.h>

int armstrong(int n, int count){
	int res = 0;
	int n2 = n;
	
	while(n2){
		int pow = 1;
		int dig = n2 % 10;
		for(int i = 0; i < count; ++i){
			pow *= dig; 		
		}
		res += pow;
		n2 /= 10;
	}

	if(n == res){
		return 1;
	}else{
		return 0;
	}
}
