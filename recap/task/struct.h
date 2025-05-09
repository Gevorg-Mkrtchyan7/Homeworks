typedef enum{
	elec = 1,
	food,
	clot,
}categories;

typedef struct{
	char name[20];
       	categories category;
	float price;
}product;
