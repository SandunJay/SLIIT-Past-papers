#include<stdio.h>
int main(void)
{
	int itm_no , qut;
	float tot , unit_price;
	

	printf("Enter Item :");
	scanf("%d" , &itm_no);
	
	while(itm_no != -99 )
	{
	
	printf("Enter Quantity :");
	scanf("%d", &qut);
	
	 if(itm_no == 1)
	 	unit_price = 30.00;
	else if (itm_no == 2)
		unit_price = 45.00;
	else if (itm_no == 3)
		unit_price = 55.00;
	 
	tot = tot + (unit_price * qut);
	
	printf("Enter Item :");
	scanf("%d" , &itm_no);
	
	}
	printf("Total Price to Pay Rs: %.2f" , tot);
	
	return 0;
}
