typedef struct
{
	float mark;
	int age;
	char name[30];
} student;

void tp(student info[], int index){
	printf("%s, %d, %f \n", info[index].name, info[index].age, info[index].mark);
}

void func(student info[], int a){
	int best = info[0].mark;
	int index = 0;
	for(int i = 1; i < a; ++i){
		if(best < info[i].mark){
			best = info[i].mark;
			index = i;
		}
	}
	tp(info, index);
}
