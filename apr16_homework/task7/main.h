typedef union
{
	float num2;
	int num1;
} value;

void size(value num){
	printf("Size of union: %lu bytes(minimum size of the largest member) \n", sizeof(value));
}
