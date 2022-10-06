#include<stdio.h>
#include<assert.h>

float calPayment(char type);
float calDiscount(int age , float payment);
void testDiscount();

int main(void)
{
	char type;
	int age;
	float payment , discount , total;
	
	testDiscount();
	
	printf("Enter Package :");
	scanf(" %c" , &type);
	
	printf("Enter age :");
	scanf(" %d" , &age);
	
	payment = calPayment(type);
	discount = calDiscount(age , payment);
	
	total = payment - discount;
	printf("Total Payment : %.2f" , total);
	return 0;
}
float calPayment(char type)
{
	float payment;
	
	switch(type)
	{
		case 'S':
		case 's' :	
			payment = 15000.00;
			break;
			
		case 'c':
		case 'C':
			payment = 50000.00;
			break;
			
		case 'H':
		case 'h':
			payment = 30000.00;
			break;
				
	}
	
	return payment;
}
float calDiscount(int age , float payment)
{
	float discount=0;
	
	if(age >= 60)
		discount = payment * (10.0/100);
	else
		discount =0;
	
	return discount;
}
void testDiscount()
{
	assert(calDiscount(62 , 15000.00) == 1500.00);
	assert(calDiscount(62 , 20000.00) == 2000.00);
	
}
