// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>

int main(void)
{
	int option;
	int gust_no , days;
	float hotel_tot;
	float tours_tot;
	int tours_opt;
	char tours_cho ='y' ;
	float tot;
	
	// getting keyboard inputs
	printf("Input Room Option :"); 
	scanf(" %d", &option);
	
	printf(" Number of guests :");
	scanf(" %d", &gust_no);
	
	printf("Number of Days :");
	scanf(" %d", &days);
	
	while(tours_cho == 'y')  
	{
		printf("Do you need any additional tours ( y/n) : ");
		scanf(" %c", &tours_cho);
		
		if(tours_cho == 'y')
		{
		printf("Input your option :");
		scanf(" %d", &tours_opt);
		}
		else if(tours_cho == 'n')
		{
			break;
		}
		//getting ammount for tours charges
		switch(tours_opt)
		{
			case 1: 
				tours_tot = tours_tot + (3500 * gust_no);
				break;
			case 2:
				tours_tot = tours_tot + (1000 * gust_no);
				break;
			case 3:
				tours_tot = tours_tot + (1500 * gust_no);
				break;
			case 4 :
				tours_tot = tours_tot + (2000 * gust_no);
				break;
			//default : printf("Invalid\n\n");
		}
	}
	
	// geting ammout for hotel cahrges
	switch(option)
	{
		case 1:
			if(gust_no <= 2)
			{
				hotel_tot = 45000 * gust_no;  
			}
			else if(gust_no >=3 && gust_no <= 5)
			{
				hotel_tot = 44000 * gust_no;
			}
			else if(gust_no >5 )
			{
				hotel_tot = 43000 * gust_no;
			}
			else 
			{
				printf("Invalid\n\n");
			}
			break;
		case 2:
			if(gust_no <= 2)
			{
				hotel_tot = 40000 * gust_no;  
			}
			else if(gust_no >=3 && gust_no <= 5)
			{
				hotel_tot = 38000 * gust_no;
			}
			else if(gust_no >5 )
			{
				hotel_tot = 35000 * gust_no;
			}
			else 
			{
				printf("Invalid\n\n");
			}
			break;
		case 3:
			if(gust_no <= 2)
			{
				hotel_tot = 37500 * gust_no;  
			}
			else if(gust_no >=3 && gust_no <= 5)
			{
				hotel_tot = 35000 * gust_no;
			}
			else if(gust_no >5 )
			{
				hotel_tot = 32000 * gust_no;
			}
			else 
			{
				printf("Invalid\n\n");
			}
			break;
		default : printf("Invalid \n\n");
	}
	
	tot = (hotel_tot * days) + tours_tot ;
	printf("Total Price : %.2f" , tot);
	return 0;
}
