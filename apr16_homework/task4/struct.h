typedef enum
{
	elect = 1,
	food = 2,
	cloth = 3,
} categories;

typedef struct
{
	char name[20];
	categories category;
	float price;
} product;
