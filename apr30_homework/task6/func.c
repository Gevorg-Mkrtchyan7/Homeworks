#include <stdio.h>
#include <stdlib.h>

void* custom_realloc(void* ptr, size_t new_size)
{
	if(ptr == NULL){
		return malloc(new_size);
	}
	
	if(new_size == 0){
		free(ptr);
		return NULL;
	}
		
	void* new = malloc(new_size);
	
	char* src = (char*)ptr;
	char* dest = (char*)new;

	for(int i = 0; i < new_size; ++i){
		dest[i] = src[i];
	}

	free(ptr);
	return new;
}
