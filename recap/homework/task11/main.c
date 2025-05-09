#include <stdio.h>

char* mat(int a, int b, char str[a][b]);

int main(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	char str[a][b];	
	for(int i = 0; i < a; ++i){
		for(int j = 0; j < b; ++j){
			scanf(" %c", &str[i][j]);
		}
	}
	char* res = mat(a, b, str);
	printf("%s \n", res);	
}
