#include <stdio.h>

int func(int a){
	++a;
	while(1){
		int x = 0;
		for(int i = 2; i <= a; ++i){
			if(a % i == 0){
				++x;
			}
		}
		if(x == 1){
			return a;
		}
		a++;
	}
	
} 
