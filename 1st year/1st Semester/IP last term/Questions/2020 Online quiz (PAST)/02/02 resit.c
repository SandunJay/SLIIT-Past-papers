#include<stdio.h>
double calculateAmount(int type, double initial);
void printDetails(int type, double initial, double balance);
int checkEligibility(double balance);

int main(void)
{
	int type, i;
	float initial;
	double bal;
	
	for(i = 1 ; i <= 5 ; i++)
	{
		
	printf("Enter Type : ");
	scanf("%d" , &type);
	
	printf("Enter Initial Value :");
	scanf("%f" , &initial);
	
	bal = calculateAmount(type , initial);
	printDetails( type,  initial,  bal);
	checkEligibility(bal);
	
	}
	return 0;
}

double calculateAmount(int type, double initial)
{
	float interest_rate , interest;
	double balance;
	
	switch(type)
	{
		case 1:
			interest_rate = 4.0;
			break;
		case 2:
			interest_rate = 7.0;
			break;
		case 3:
			interest_rate = 10.0;
			break;
	}
	interest = initial  * interest_rate / 100;
	balance  = initial  + interest;
	
	return balance;
}

void printDetails(int type, double initial, double balance)
{
	printf("--------------------\n");
	printf("Account Type : %d \n" , type);
	printf("Initial Value : %.2f\n" , initial);
	printf("amount of the account at the end of the year : %.2f \n" , balance);
	printf("--------------------\n");
}
int checkEligibility(double balance)
{
	int a;
	
	if(balance >= 5000){
		a=1;
		printf("Eligibile for the raffle draw \n");
		printf("--------------------\n");
	}
	else{
		a = 2;
		printf("Not eligibile for the raffle draw \n");
		printf("--------------------\n");
	}
	return a;
}
