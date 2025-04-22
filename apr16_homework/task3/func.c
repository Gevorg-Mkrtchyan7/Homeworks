#include "struct.h"

void tp(student info[], int);

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
