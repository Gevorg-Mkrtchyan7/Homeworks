#include <stdio.h>

int func(){
	static int x = 0;
 	++x;
	return x;
}
