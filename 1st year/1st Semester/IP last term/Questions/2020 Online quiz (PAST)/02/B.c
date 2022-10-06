#include<stdio.h>
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);
int main(void)
{
	int num;
	float charge , dis , tot;
	
	printf("number of guests : ");
	scanf("%d" , &num);
	
	printf("charge per guest : ");
	scanf("%f" , &charge);
	
	dis = getDiscountPrice(num, charge);
	tot = getAmount( num, charge ,  dis);
	
	printf("Discount : %.2f\n" , dis);
	printf("Amount to be paid : %.2f\n" , tot);
	
	return 0;
}
float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
	float discount , hot_charge;
	
	hot_charge = noOfGuests *  chargePerGuest;
	
	if(noOfGuests > 200)
		discount = hot_charge * (10.0 / 100 );
	else
		discount = 0;
		
	return discount;
}
float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
	float total;
	
	total = (noOfGuests * chargePerGuest ) - discount;
	
	return total;
}
