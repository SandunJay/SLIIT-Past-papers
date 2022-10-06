/* 	Name - 
	IT Number - 
	malabe campus
	Group - 
*/ 

#include<stdio.h>

int main (void)

{
	int num;
	int marks;
	float dis;
	float tot;
	
	printf("course Number : ");
	scanf("%d" , &num);
	
	printf("Aptitude Test Marks : ");
	scanf("%d" , &marks);
	
	if( num = 1)
	{
		if(marks < 80)
		{
			dis = 0;
			tot = 150000 - dis;
			
			printf("Discount : %.2f\n" , dis);
			printf (" Cours Fee : %.2f\n" , tot);
		}
		else if (marks >= 80 && marks <= 100)
		{
			dis = 150000 * 7.5 / 100.0;
			
			tot = 150000 - dis;
			
			printf("Discount : %.2f\n" , dis);
			printf (" Cours Fee : %.2f\n" , tot);
		}
		
	}
	else if( num = 2)
	{
		if(marks < 80)
		{
			dis = 0;
			
			tot = 175000 - dis;
			
			printf("Discount : %.2f\n" , dis);
			printf (" Cours Fee : %.2f\n" , tot);
		}
		else if (marks >= 80 && marks <= 100)
		{
			dis = 175000 * 7.5 / 100.0;
			tot = 175000 - dis;
			
			printf("Discount : %.2f\n" , dis);
			printf (" Cours Fee : %.2f\n" , tot);
		}
	
	}
	
	
		
	else 
	{
		printf (" Invalid Course\n");
	}
	return 0;
}


