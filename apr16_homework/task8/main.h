typedef union
{
	float num2;
	int num1;
	char ch;
} value;

void size(value a){
	printf("Integer = %d, floar = %f, char = %c \n", a.num1, a.num2, a.ch);
}
