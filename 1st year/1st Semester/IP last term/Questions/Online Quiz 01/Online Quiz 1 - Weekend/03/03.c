/* 	Name - 
	IT Number - 
	malabe campus
	Group - 
*/ 

#include<stdio.h>

int main (void)

{
	int no;
	int users;
	float amt;
	
	
	printf("Product no :  ");
	scanf(" %d" , &no  );
	
	printf(" Number of Users : ");
	scanf("%d" , &users );
	
	if(no == 1 )
	{
		if ( users >= 0 && users <= 100)
		{
			amt = 15.5 * users;
		}
		else if(users > 100)
		{
			amt = 15.5 * 100;
			amt = amt + ((users - 100) * 25.0 );
		}
		
	}
	else if( no == 2)
	{
		if ( users >= 0 && users <= 100)
		{
			amt = 25.5 * users;
		}
		else if(users > 100)
		{
			amt = 25.5 * 100;
			amt = amt + ((users - 100) * 35.0 );
		
		}	
	}

	printf("Amount to be paid : %.2f " , amt );
	return 0;
}


