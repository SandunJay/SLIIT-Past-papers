#include <stdio.h>

int main()
{
	/* your code *
	/* because you may not know the else instruction yet,
	this simple formula will help you to check if a year is a leap year */
	
	int day;
	int month;
	int year;
	int tot;
	
	printf("Input Year : ");
	scanf("%d" , &year);
		
	printf("Input Month : ");
	scanf("%d" , &month);
	
	printf("Input Day : ");
	scanf("%d" , &day);
	

	if (year % 100 == 0) //not leap
	{
	
		switch (month)
		{
			case 1:
				tot =  day ;
				break;
			case 2 :
				tot = 31 + ( day);
				break;
			case 3 : 
				tot = 31 + 28 +( day);
				break;
			case 4 :
				tot = 31 + 28 + 31 + ( day);
				break;
			case 5 :
				tot = 31 + 28 + 31 + 30 +( day);
				break;
			case 6 :
				tot = 31 + 28 +31 +30 +31 + ( day);
				break;
			case 7 :
				tot = 31 + 28 + 31 + 30 + 31 + 30 + ( day);
				break;
			case 8 : 
				tot = 31 + 28 + 31 +30 + 31 + 30 + 31 + ( day);
				break;
			case 9 :
				tot = 31 + 28 + 31 +30 + 31 + 30 + 31 + 31 + ( day);
				break;
			case 10 :
				tot = 31 + 28 + 31 +30 + 31 + 30 + 31 + 31 + 30 + ( day);
				break;
			case 11 :
				tot = 31 + 28 + 31 +30 + 31 + 30 + 31 + 31 + 30 + 31 + ( day);
				break;
			case 12 :
				tot = 31 + 28 + 31 +30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + ( day);
				break;
			default : 
				puts("Error");
		}
		
	}
	
	else if (year % 4 == 0) //leap
	
	{
	
		switch (month)
		{
			case 1:
				tot =  day ;
				break;
			case 2 :
				tot = 31 + ( day);
				break;
			case 3 : 
				tot = 31 + 29 +(day);
				break;
			case 4 :
				tot = 31 + 29 + 31 + ( day);
				break;
			case 5 :
				tot = 31 + 29 + 31 + 30 +( day);
				break;
			case 6 :
				tot = 31 + 29 +31 +30 +31 + ( day);
				break;
			case 7 :
				tot = 31 + 29 + 31 + 30 + 31 + 30 + ( day);
				break;
			case 8 : 
				tot = 31 + 29 + 31 +30 + 31 + 30 + 31 + ( day);
				break;
			case 9 :
				tot = 31 + 29 + 31 +30 + 31 + 30 + 31 + 31 + ( day);
				break;
			case 10 :
				tot = 31 + 29 + 31 +30 + 31 + 30 + 31 + 31 + 30 + ( day);
				break;
			case 11 :
				tot = 31 + 29 + 31 +30 + 31 + 30 + 31 + 31 + 30 + 31 + (day);
				break;
			case 12 :
				tot = 31 + 29 + 31 +30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + ( day);
				break;
			default : 
				puts("Error");
		}
		
	}
		
	printf("Total Days : %d" , tot);	
			
	return 0;

}
