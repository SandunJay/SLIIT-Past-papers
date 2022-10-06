#include<stdio.h>
int main(void)
{
	int intArr[10] ={0} , positiveNum[10] = {0} , negativeNum[10]= {0} ;
	int i , j=0 , k=0;
	
	for(i=0 ; i<10 ; i++)
	{
		printf("Enter Number :");
		scanf("%d" , &intArr[i]);
		
		
		if(intArr[i] >= 0)
		{
			positiveNum[j] = intArr[i];
			j = j+1;
		}
		else
		{
			negativeNum[k] = intArr[i];
			k = k+1;
		}
	}
	
	printf("\n\nNumber Series :");
	for(i=0 ; i<10 ; i++)
	{
		printf("%d\t" , intArr[i] );
	}
	
	printf("\n\nPositive Numbers :");
	for(i=0 ; i<j ; i++)
	{
		printf("%d\t" , positiveNum[i] );
	}
	
	printf("\n\nNegative Numbers :");
	for(i=0 ; i<k ; i++)
	{
		printf("%d\t" , negativeNum[i] );
	}
	return 0;
}
