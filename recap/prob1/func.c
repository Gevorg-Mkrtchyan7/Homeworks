#include <stdio.h>
#include <stdlib.h>

char* decimalToBinary(int n){
	char* p = (char*)malloc(33);
	if(!p){
		return NULL;
	}

	p[32] = '\0';

	int negative = 0;
	if(n < 0){
		negative = 1;
		n = -n;
	}

	int index = 31;
	while(n){
		p[index--] = (n % 2) + '0';
	       	n /= 2;	
	}
	
	while(index >= 0){
		p[index--] = '0';
	}
	
	if(negative == 1){
		for(int i = 0; i <= 32; ++i){
			if(p[i] == '1'){
				p[i] = '0';
			}else{
				p[i] = '1';
			}
		}
	}

	for(int i = 31; i >= 0; --i){
		if(p[i] == '1'){
			p[i] = '0';
		}else{
			p[i] = '1';
			break;
		}
	}

	return p;
}
