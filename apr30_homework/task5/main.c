#include <stdio.h>
#include <stdlib.h>

void* custom_calloc(size_t, size_t);

int main()
{
	int n = 0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int * arr = custom_calloc(n, sizeof(int));
	if(arr == NULL){
		printf("No enough memory!\n");
		return 0;
	}
	
	printf("Enter %d elements of arr:\n", n);
	for(int i = 0; i < n; ++i){
		scanf("%d", arr + i);
	}
	
	printf("You entered:\n");
	for(int i = 0; i < n; ++i){	
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
	return 0;
}
