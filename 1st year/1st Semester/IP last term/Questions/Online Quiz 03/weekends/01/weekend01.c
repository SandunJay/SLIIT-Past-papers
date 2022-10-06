/*  Name -  
	 IT number -   
  	 2021 Batch , Malabe campus */ 	


#include<stdio.h>
float calAddtionalCharges(int orderType , float subTotal);
float calTotaBill(float subTotal , float charges);

int main(void)  //main function
{
	// declare variables
	int type;
	float sub_tot , charge , final_tot;
	
	//getting Input
	printf("Enter Order Type : ");
	scanf("%d" , &type);
	
	printf("subtotal : ");
	scanf("%f" , &sub_tot);
	
	//function calling
	charge = calAddtionalCharges(type ,  sub_tot);   
	final_tot = calTotaBill(sub_tot , charge); 
	  
	//Output
	printf("Total bill amount : %.2f" , final_tot);
	
	
	return 0;
}
float calAddtionalCharges(int orderType , float subTotal)  // function Implementation - calAddtionalCharges
{
	float tax , serv_charge , dil_charge, add_charge;
	
	switch(orderType)
	{
		case 1:
			tax = subTotal * (12.0/100);
			serv_charge = subTotal * (10.0/100);
			dil_charge = 0;
			break;
		case 2 :
			tax = subTotal * (12.0/100);
			serv_charge = 0;
			dil_charge = 0;
			break;
		case 3 :
			tax = subTotal * (12.0/100);
			serv_charge = 0;
			dil_charge = subTotal * (5.0/100) ;
			break;
		default:
			printf("Error \n");		
	}
	
	add_charge = tax + serv_charge + dil_charge; //calculations
	
	return add_charge;
}
float calTotaBill(float subTotal , float charges)  // function Implementation - calTotaBill
{
	float tot;
	
	tot = subTotal + charges ;  //calculations
	
	return tot;
}
