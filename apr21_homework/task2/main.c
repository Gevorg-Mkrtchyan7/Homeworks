#include <stdio.h>
#include "struct.h"

void display(BankAccount* account);
void withdraw(BankAccount* account);
void deposit(BankAccount* account);
void in(BankAccount* info);

int main(){
	BankAccount info;
	in(&info);
	int action;

	while(1){
		printf("\n");
		printf("Enter 1-deposit, 2-withdraw, 3-display, 4-exit: ");
		scanf("%d", &action);
		if(action == 1){
			deposit(&info);
		}else if(action == 2){
			withdraw(&info);
		}else if(action == 3){
			display(&info);
		}else if(action == 4){
			return 0;
		}else{
			printf("You entered wrong number! \n");
		}
	}
}
