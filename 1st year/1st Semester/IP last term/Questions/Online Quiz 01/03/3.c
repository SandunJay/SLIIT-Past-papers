//01

#include<stdio.h>

int main (void)
{
	int cus_typ;
	float bill_amt;
	float charge;
	float discount = 0;
	
	printf("Customer Type : ");		// input customer type
	scanf(" %d" , &cus_typ);
	
	printf("Bill Amount :RS. ");	//Input Number of units
	scanf(" %f" , &bill_amt );
	
	if(cus_typ == 1)
	{
		if(bill_amt <= 2500)
		{
			discount = bill_amt * 5.00 /100;
		}
		else if(bill_amt > 2500)
		{
			discount = bill_amt * 10.00 /100;
		}
	}
	else
	{
		if(bill_amt > 5000)
		{
			discount = bill_amt * 10 / 100;
		}
		else 
		{
			discount = 0;
		}
		
	}
	
	printf("Discount Amount :Rs.%.2f\n" , discount);		
	
	charge = bill_amt - discount;
	
	printf("Final Bill Amount :RS. %.2f \n", charge );	

	
	return 0;
}
