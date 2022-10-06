 /*  Name - Tharush Upamal Senasinghe 
	 IT number -  IT21073878 
  	 2021 Batch , Malabe campus , group 05.1.A  */ 	
  	 
#include<stdio.h>

float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

int main(void) //main function
{
	// declare variables
	int	num;
	float charge;
	float discount , tot;
	
	//getting Input
	printf("Enter no of guests:");
	scanf(" %d" , &num);
	
	printf("Enter charge per guest:");
	scanf(" %f" , &charge);
	
	discount = getDiscountPrice(num, charge);  //function calling - getDiscountPrice
	tot = getAmount(num, charge, discount);  //function calling - getAmount
	
	//Output
	printf("Discount : %.2f\n" , discount);  
	printf("Amount to be paid : %.2f\n" , tot);
	
	return 0;
}
float getDiscountPrice(int noOfGuests, float chargePerGuest)  // function Implementation - getDiscountPrice
{
	float dis , hotel_charge;
	
	hotel_charge = noOfGuests * chargePerGuest; //calculations
	
	
	//discount 
	if(noOfGuests >= 200 )
		dis = hotel_charge * (10.0 / 100);  
	else
		dis = 0;
		
	return dis;
}
float getAmount(int noOfGuests, float chargePerGuest, float discount)  // function Implementation - getAmount
{
	float tot;
	
	tot = (noOfGuests * chargePerGuest ) - discount; //calculations
	
	return tot;
}
