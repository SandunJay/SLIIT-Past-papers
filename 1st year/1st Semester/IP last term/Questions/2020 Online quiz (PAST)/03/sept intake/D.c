#include<stdio.h>
int main(void)
{
	int num[8] = {0};
	int i , count = 0;
	
	for(i=0 ; i < 8 ; i++)
	{
		printf("Enter Number : ");
		scanf("%d" , &num[i]);
		
		if(num[i] < 1 ||  num[i] > 5)
		{
			printf("Invalid Input. Re-Enter\n");
			i--;
			
		}
		
		if(num[i] >= 1 &&  num[i] < 5)
		{
			if(num[i] == 3 && num[i-1] == 1)
				count++;
		}
		
	
	}
	
	printf("\nNum Array :");
	for(i=0 ; i < 8 ; i++)
	{
		printf("%d\t" , num[i]);
	}
	
	
	printf("\n Number of times the Pattern '1 3' appear : %d" , count);
	return 0;
}
