#include<stdio.h>
int main(void)
{
	char led[4][4] = {0};
	int i , j ;
	
	//grting Input
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("Enter Color (R / G / B):");
			scanf(" %c" , &led[i][j]);
		}
	}
	
	puts(" ");
	puts("LED Light Pattern");
	
	
	//Display
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf(" %c\t" , led[i][j]);
		}
		puts(" ");
	}
	puts(" ");
	puts("RED LED bulb Positions");
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			if(led[i][j] == 'R')
			{
				printf("[%d , %d]\t" , i , j );
			}	
		}
	}
	
	
	
	return 0;
}
