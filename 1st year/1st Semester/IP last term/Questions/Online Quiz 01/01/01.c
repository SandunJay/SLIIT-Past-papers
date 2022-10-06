//01

#include<stdio.h>

int main (void)
{
	//diclare Variables
	
	int cus_typ;
	int units;
	float charge;
	float add_charge = 0;
	
	printf("Customer Type : ");		// input customer type
	scanf(" %d" , &cus_typ);
	
	printf("Number of Units : ");	//Input Number of units
	scanf(" %d" , &units );
	
	if(cus_typ == 1)  // if customer type is 01
	{
		if(units <= 100)
		{
			charge = 10 * units;
		}
		else
		{
			charge = 100 * 10 + ((units - 100 ) * 30 );
			add_charge = charge * 20 / 100 ;  //additional Charge for Donestic Cusomers
			
		}
	}
	else if(cus_typ == 2)		// if customer type is 02
	{
		if(units <= 100)
		{
			charge = 10 * units;
		}
		else
		{
			charge = 100 * 10 + ((units - 100 ) * 30 );
		}
	}
	
	charge = charge + add_charge ;
	printf("Monthly charge : %.2f ", charge); //display
	
	return 0;
	//end
}
