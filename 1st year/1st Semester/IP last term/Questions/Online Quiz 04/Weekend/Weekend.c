#include<stdio.h>
int main(void)
{
	int number[5] = {0};
	int i,j , count = 0;
	int num;
	
	printf("Enter Values for Attay :\n");
	for(i=0 ; i<5 ; i++)
	{
		scanf("%d" , &number[i]);
		
		if(number[i] < 0){
			printf("Please enter Positive Number\n");
			i--;
		}
	}
	do{
	
	printf("\nEnter The Number : ");
	scanf("%d" , &num );
	
	count = 0;
	
	for(i=0 ; i<5 ; i++)
	{
		if(num == number[i] )
		{
			j = 1;
			count++;
		}
	}
	
	if(count > 1)
	{
		printf("\nNumber Repeated %d times" , count);
	}
	else 
	{
		printf("\nNumber Not  Repeated ");
	}
	
	}while(count>1);
	return 0;
}
