#include <stdio.h>
#include "struct.h"

void deposit(BankAccount* account){
	printf("\n");
	float sum = 0;
	printf("Deposit sum: ");
	scanf("%f", &sum);
	account->balance += sum;
}
