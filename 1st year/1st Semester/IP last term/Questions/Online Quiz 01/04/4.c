//04

#include<stdio.h>

int main (void)

{
	int no_month;
	float basic_sal;
	float bonus = 0;
	
	printf("Number of months : ");
	scanf(" %d" , &no_month);
	
	printf("Basic Salary : ");
	scanf(" %f" , &basic_sal);
	
	
	if(no_month >= 6)
	{
		if(no_month == 12 && basic_sal <= 45000 )
		{
			bonus = 13 * basic_sal;	
		} 
		
		else
		{
				bonus = no_month * basic_sal;
		}
			
	}
	else
	{
		bonus = 0;

	}
	
	
	printf("Bonus : %.2f " , bonus);
	
	return 0;
}
