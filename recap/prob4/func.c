#include <stdio.h>

int search(int n, int* arr, int size){
	int a = 0;
	int index = size / 2;
	while(n != a + 1){
		if(n > a){
			index += index / 2; 
			a = index;		
		}else{
			index -= index / 2;
			a = index;
		}
	}
	return a;
} 
