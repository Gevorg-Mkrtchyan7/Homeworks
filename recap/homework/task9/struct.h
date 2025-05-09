typedef enum{
	INT = 1,
	FLOAT,
	STR,	
}type;

typedef union{
	int i;
	float f;
	char str[50];
}store;

typedef struct{
	type typ;
	store enter;
	char name[20];	
}struc;
