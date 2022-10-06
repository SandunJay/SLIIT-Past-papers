#include<stdio.h>
int main(void)
{
	int myArray[10] = {0};
	int largeNum[10] = {0};
	float sum = 0 , avg = 0;
	int i,k = 0;
	
	for(i=0 ; i<10 ; i++)
	{
		printf("Enter Number :");
		scanf("%d" , &myArray[i]);
		
		sum = sum + myArray[i];
	}
	
	avg = sum / i;
	printf("\nAverage : %.1f\n", avg);
	for(i=0 ; i<10 ; i++)
	{
		if(myArray[i] > avg)
		{
			largeNum[k] = myArray[i];
			k = k+1;
		}
	}
	
	printf("\nmyArray :");
	for(i=0 ; i<10 ; i++)
	{
		printf("%d\t" , myArray[i]);
	}
	
	printf("\n\nlargeNum :");
	for(i=0 ; i<k ; i++)
	{
		printf("%d\t" , largeNum[i] );
	}
	
	return 0;
}
