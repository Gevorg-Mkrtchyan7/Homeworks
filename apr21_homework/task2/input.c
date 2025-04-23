#include <stdio.h>
#include <string.h>
#include "struct.h"

void in(BankAccount* info){
	printf("Enter number of accaunt: ");
	scanf("%d", &(info->accountNumber));

	printf("Enter the holder naume: ");
	scanf("%s", info->accountNumber);

	printf("Enter your balance: ");
	scanf("%f", &(info->balance));
}
