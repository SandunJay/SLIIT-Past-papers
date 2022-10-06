#include<stdio.h>
int main (void)
{
	int itm_no , quty ;
	float unit_price , tot=0 ;
	
	printf("Enter Item : ");
	scanf(" %d" , &itm_no);
	
	while(itm_no != -1)
	{
		printf("Enter Quantity :");
		scanf(" %d", &quty);
		
		switch(itm_no)
		{
			case 1:
				unit_price = 300.25;
				break;
			case 2:
				unit_price = 145.50;
				break;
			case 3:
				unit_price = 525.00;
				break;
			default:
				printf("Invalid");
				
		}
		
		tot = tot + (unit_price * quty);
		
		printf("Enter Item : ");
		scanf(" %d" , &itm_no);
		
	}
	
	printf("Total Price to pay Rs : %.2f" , tot);
	
	return 0;
}
