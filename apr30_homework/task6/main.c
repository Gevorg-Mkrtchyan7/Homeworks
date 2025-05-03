#include <stdio.h>
#include <stdlib.h>

void * custom_realloc(void*, size_t);

int main()
{
	int n = 0;
	printf("Enter a number of array elements: ");
	scanf("%d", &n);
	
	int * arr = (int *)malloc(n * sizeof(int));

	if(arr == NULL){
		printf("No enough memory!\n");
		return 0;
	}

	printf("Enter array elements:\n");
	for(int i = 0; i < n; ++i){
		scanf("%d", arr + i);
	}

	arr = custom_realloc(arr, 2*n*sizeof(int));
	if(arr == NULL){
		printf("No enough memory!\n");
		return 0;
	}
	
	printf("Enter new %d elements of array:\n", n);
	for(int i = n; i < 2*n; ++i){
		scanf("%d", arr + i);
	}

	printf("The new array is: \n");
	for(int i = 0; i < 2*n; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
	return 0;
}
