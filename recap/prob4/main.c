#include <stdio.h>

int search(int, int*, int);

int main(){
	int size = 0;
	scanf("%d", &size);
	int n = 0;
	scanf("%d", &n);
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		arr[i] = i + 1;
	}
	int res = search(n, arr, size);
	printf("%d \n", res);
}
