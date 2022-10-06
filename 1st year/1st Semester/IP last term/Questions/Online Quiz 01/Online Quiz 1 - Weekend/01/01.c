/* 	Name - kaz
	IT Number - 
	malabe campus
	Group - 
*/ 

#include<stdio.h>

int main (void)

{
	//diclare variables
	
	int years;
	int units;
	float tot = 0;

	
	
	printf("no of years worked :");  //input 
	scanf("%d" , &years);
	
		
	printf("No of units : "); //input 
	scanf("%d" , &units);
	
	if(years > 2 )
	{
		if( units <= 30 )
		{
			tot = units * 1000.00;
		}
		else if( units > 30 && units <= 100)	
		{
			tot = units * 2500.00;
		}
		else if( units > 100 )
		{
			tot = units * 3500.00	;
		}
	}
	else 
	{
		tot = tot;
	}
	
	printf("Commission : %.2f" , tot);
	
	return 0;
	//end
}




