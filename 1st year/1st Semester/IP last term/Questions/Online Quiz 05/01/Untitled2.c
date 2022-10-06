#include <stdio.h>

int main(void)
{
	int arr1[5][4];
	int vol[4] = {1,1,1,1};
	int i,j;
	
	for(i=0; i<4; i++)
	{
		printf("Enter value row %d :\n",i+1);
		for(j=0; j<3; j++)
		{
			printf("Enter the value column %d :",j+1);
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d", arr1[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<4; i++)
	{
	
		vol[i] = arr1[i][0] * arr1[i][1] * arr1[i][2] ;
		
		printf("Voloum %d is : %d \n" , i , vol[i]);
		vol[i] = 0 ; 
		
	}
	
	return 0;
}
