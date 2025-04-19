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

void func(product info[]){
	int index = 0;
	for(int i = 0; i < 3; ++i){
		if(info[i].category == 2){
			index = i;
			printf("%s, %u, $%f \n", info[index].name, info[index].category, info[index].price);
		}
	}
}
