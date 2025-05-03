#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void * custom_calloc(size_t num, size_t size){
	size_t total = num * size;

	void * p = malloc(total);
	if(p){
		for(int i = 0; i < num; ++i){
			memset(p, 0, num);
		}
	}
	
	return p;
}
