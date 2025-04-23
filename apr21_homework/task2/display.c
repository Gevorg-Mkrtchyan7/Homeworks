#include <stdio.h>
#include "struct.h"

void display(BankAccount* account){
	printf("\n");
	printf("Number of account: %d \n", account->accountNumber);
	printf("Holder name: %s \n", account->holderName);
	printf("Balance: $%f \n", account->balance);
}
