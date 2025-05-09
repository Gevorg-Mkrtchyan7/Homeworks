#include <stdio.h>

void sort(int*, int);

int main(){
	int size;
	scanf("%d", &size);
	int arr[size];
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	sort(arr, size);
}
