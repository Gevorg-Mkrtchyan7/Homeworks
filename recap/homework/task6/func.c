#include <stdio.h>
#include <string.h>

void digraph(char* str){
	for(int i = 0; i < strlen(str); ++i){
		if(str[i] != 'A' && str[i] != 'a' && str[i] != 'E' && str[i] != 'e' && str[i] != 'i' && str[i] != 'I' && str[i] != 'o' && str[i] != 'O' && str[i] != 'u' && str[i] != 'U'){
			str[i] = 32;
		}
	}
}
