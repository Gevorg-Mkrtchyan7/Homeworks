#include <stdio.h>

void sort(int* arr, int size){
	int tmp;
	for(int i = 1; i < size; ++i){
		for(int j = 1; j < size; ++j){
			if(arr[j - 1] < arr[j]){
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}		
		} 
	}

	for(int i = 0; i < size; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
