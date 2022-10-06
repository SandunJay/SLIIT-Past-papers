#include<stdio.h>
int main(void)
{
	int arr[5][5],arr1[5][5];
	int i,j,max,min;
	float avg,tot;
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Input Column %d Data :\n",i+1);
		
		for(j=0 ; j<5 ; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	printf("\n");
	}
	for(i=0 ; i<5 ; i++)
	{		
		for(j=0 ; j<5 ; j++)
		{
			printf("%d\t",arr[i][j]);	
		}
	printf("\n");
	}
	
	for(i=0 ; i<5 ; i++)
	{		
		for(j=0 ; j<5 ; j++)
		{
			arr1[i][j]=arr[j][i]	;
		}
	}
	
	
	for(i=0 ; i<5 ; i++)
	{	
		printf("Column %d \n",i+1);
		avg = 0;
		tot = 0;
		max = -99;
		min = 1000;
			
		for(j=0 ; j<5 ; j++)
		{
			tot = tot + arr1[i][j];
			
			if(arr1[i][j] < min)
			{
				min = arr1[i][j];
			}
			
			if(arr1[i][j] > max)
			{
				max = arr1[i][j];
			}
			
		}
		avg = tot/5.0;
		
		printf("Total : %.2f\n",tot);
		printf("Average : %.2f\n",avg);
		printf("Max : %d\n",max);
		printf("Min : %d\n",min);
		printf("......................\n");	
		
		tot = 0;
	}
}
