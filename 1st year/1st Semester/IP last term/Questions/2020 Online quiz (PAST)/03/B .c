#include<stdio.h>
int main(void)
{
	int seat[10] = {0};
	int i , j , k ;
	
	for(k=0 ; k<10 ; k++)
	{
		seat[i] = 0;
	}
	
	
	 while(i != -1)
	{
		printf("Pls Input the seat number(1-10) : ");
		scanf("%d" , &i);
		
			
		if(seat[i] == 0 )
		{
			for(j=0 ; j<10 ; j++)
			{
				if(i == j)
				{
					seat[j] = i;
				}
			}
		}
		
		else if(i > 10 || i < 1 )
		{
			printf("Sorry. Invalid seat number \n" , i);
		}
		else if(seat[i] != -1 )
		{
			printf("Sorry. The seat %d is reseved.\n" , i);
		}
		
	}
	
	printf("\n\nReserved seat numbers :  ");
	for(k=0 ; k<j ; k++)
	{
		if(seat[k] > 0)
			printf("%d\t" , seat[k]);
	}
	
	return 0;
}
