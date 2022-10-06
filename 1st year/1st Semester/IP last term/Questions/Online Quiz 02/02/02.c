#include<stdio.h>
int main(void)
{
	int pizza_typ , quty;
	float discount =0;
	float price , tot;
	int x=0;
	
	printf("Enter Pizza Type : ");
	scanf("%d" , &pizza_typ);
		
	while(pizza_typ != -1)
	{
	
		printf("Enter Quantity :");
		scanf("%d" , &quty);
		
		switch(pizza_typ)
		{
			case 1 :
				price = 1000.00 * quty;
				if(quty >3 )
					discount = 1000.00 * ( 10.0 / 100);
			break;
			case 2 :
				price = 1600.00 * quty;
				if(quty > 3)
					discount = 1600.00 * ( 12.0 / 100);
			break;
			case 3 :
				price = 1400.00 * quty;
				if(quty > 3)
					discount = 1400.00 * ( 15.0 / 100);
			break;
			default :
				printf("Invalid\n");
		}
		
		tot = price - (discount * quty);
		printf("Total Price  Rs : %.2f\n" , tot);
		
		printf("Enter Pizza Type : ");
		scanf("%d" , &pizza_typ);
		
	}
	
	return 0;
}
