#include <stdio.h>
#include <stdlib.h>

int* prime(int** arr, int, int, int);

int main(){
	int n, m;
	int b = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	int** p = (int**)malloc(n * sizeof(int*));
	if(p){
		return 0;
	}	

	for(int i = 0; i < n; ++i){
		p[i] = (int*)malloc(m * sizeof(int));		

		if(p[i])
		return 0;
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			scanf("%d", &p[i][j]);
		}
	}
	
	int* a = prime(p, m, n, b);
	
	for(int i = 0; i < b; ++i){
		printf("%d", a[i]);
	}	
}
