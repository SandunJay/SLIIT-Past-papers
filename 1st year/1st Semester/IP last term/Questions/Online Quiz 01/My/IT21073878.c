 /* Name -- Tharush Upamal Senasinghe 
	IT number --  IT21073878 
  	2021 Batch , Malabe campus , group 05.1.A*/
  	
#include<stdio.h>

int main(void)  
{
	// declare variables
	
	int book_type;
	int  days;
	float ammount;
	
	printf("Book Type : "); // geting input of book type
	scanf(" %d" , &book_type);
	
	printf("Rent days :");  // getting input of days
	scanf(" %d", &days);
	 
	switch(book_type)
	{
		case 1:  // book type 1
			printf("Rental per day: Rs.10.00 \n"); 
			ammount = 10 * days ; // ammount
			break;
		case 2:  // book type 2
			printf("Rental per day: Rs.8.00 \n");
			ammount = 8 * days ; // ammount	
			break;	
	}
	
	if(days > 14) // if days are greater than 14
	{
		ammount = ammount + (ammount * (10.00 / 100)) ;  //ammount
	}
	else 
	{
		ammount = ammount;
	}
	 
	printf("Rental Amount : Rs  %.2f", ammount); // final output
	
	return 0;
	//end	
}
