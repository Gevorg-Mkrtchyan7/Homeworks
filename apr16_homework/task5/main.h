typedef struct
{
	char title[50];
	char author[30];
	int year;
} book;

void func(book info[], int a){
	int old = info[0].year;
	int index = 0;
	for(int i = 1; i < a; ++i){
		if(old > info[i].year){
			old = info[i].year;
			index = i;
		}
	}
	printf("%s%s%d \n", info[index].title, info[index].author, info[index].year);
}
