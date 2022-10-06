#include<stdio.h>

int main(void)  
{
	int cus_typ;
	float bill_amt;
	float dis;
	float amt;
	
	printf("Customer Type:");
	scanf("%d" , &cus_typ);
	
	printf("Bill Ammount :");
	scanf("%f" , &bill_amt);
	
	switch(cus_typ)
	{
	case 1 :
			if(bill_amt <= 2500)
			{
				dis = bill_amt * (5.00 / 100);
			}
			else
			{
				dis = bill_amt * (10.00 / 100);
			}
			break;
			
	case 2:
			
			if(bill_amt >= 5000)
			{
				dis = bill_amt * (10.00 / 100);
			}
			
			break;
	}
	amt = bill_amt - dis ;
	
	printf("Discount : Rs.%.2f\n" ,dis);
	printf("Final Bill Amount: Rs.%.2f" ,amt);
	
	return 0 ;
}
