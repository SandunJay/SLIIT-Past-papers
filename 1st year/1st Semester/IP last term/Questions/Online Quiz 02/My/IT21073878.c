 /*  Name - Tharush Upamal Senasinghe 
	 IT number -  IT21073878 
  	 2021 Batch , Malabe campus , group 05.1.A  */ 	
  	 
#include<stdio.h>
int main(void)  
{
	// declare variables
	int bur_typ;
	int quty;
	
	float ex_charg;
	float tot;
	
	printf("Enter Burger Type : "); 
	scanf("%d", &bur_typ);  // input_Burger_Type
	
	while(bur_typ == 1 || bur_typ == 2 || bur_typ == 3)
	{
	
		printf("Enter Quantity :");  
		scanf("%d", &quty);  // input_Burger_quentity
		
		switch (bur_typ)
			{
				case 1: 
					ex_charg = 0;
				break;
				case 2:
					ex_charg = 50.00;
				break;
				case 3:
					ex_charg = 100.00;
				break;
				default :
					printf("Invalid");	
			}
		
		tot = (500*quty) + (ex_charg* quty);  //final calculation
		
		printf("Total Price : RS. %.2f\n" , tot);  // print final total
		
		printf("Enter Burger Type : ");
		scanf("%d", &bur_typ);	
	}
	
	return 0; // end
}
