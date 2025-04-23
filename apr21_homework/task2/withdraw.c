#include <stdio.h>
#include "struct.h"

void withdraw(BankAccount* account){
	printf("\n");
	float sum = 0;
	printf("Withraw sum: ");
	scanf("%f", &sum);
	if(sum <= account->balance){
		account->balance -= sum;
	}else{
		printf("You don't have that much money \n");
	}
}
