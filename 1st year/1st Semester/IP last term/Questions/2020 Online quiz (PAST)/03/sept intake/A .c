#include<stdio.h>
int main(void)
{
	int  numArr[6] , oddNum[6], 	evenNum[6] ;
	int i;
	int j = 0;
	int k = 0;
	
	
	for(i = 0 ; i <6  ; i++)
	{
		printf("Number Series : ");
		scanf("%d" , &numArr[i]);
	}
	
	//checking odd or even
	for(i = 0 ; i < 6 ; i++)
	{
		if(numArr[i] % 2 == 0)
		{
			evenNum[j] = numArr[i];
			j = j+1;
		}
		else
		{
			oddNum[k] = numArr[i];	
			k = k+1;
		}
	}
	
	printf("\nOdd Numbers : ");
	
	for(i = 0 ; i < k ; i++)
	{
		printf("%d\t" , oddNum[i] );
	}
	 
	 
	printf("\nEven Numbers : ");
	
	for(i = 0 ; i < j ; i++)
	{
		printf("%d\t" , evenNum[i] );
	}
	
	return 0;
}
