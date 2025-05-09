#include <stdlib.h>

char* mat(int a, int b, char str[a][b]){
	char* p = malloc(a + 1);
	if(p){
		return NULL;
	}
	for(int i = 0; i < a; ++i){
		p[i] = str[i][i];
	}
	p[a] = '\0';
	return p;
}
