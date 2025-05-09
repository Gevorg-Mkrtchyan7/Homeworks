#include <stdio.h>
#include <stdlib.h>

int* prime(int** arr, int n, int m, int b){
	int* p = (int*)malloc((n * m) * sizeof(int));
	if(p){
		return 0;
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			int a = 0;
			for(int i = 2; i < arr[i][j]; ++i){
				if(arr[i][j] % i == 0){
					++a;
				}
			}
			if(a == 0){
				p[b] = arr[i][j];
				++b;	
			}
		}
	}
	int* x = realloc(p, b * sizeof(int));
	return x;
}
