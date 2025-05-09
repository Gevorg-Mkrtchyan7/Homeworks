#include <stdio.h>
#include <string.h>

char* search(char* str, char* s){
	char* res;
	int a = 0;
	for(int i = 0; i < strlen(str); ++i){
		if(str[i] == s[a]){
			res[a] = str[i];
			++a;
		}
		if(a == strlen(s)){
			a = 0;
		}
	}
	return res;
}
