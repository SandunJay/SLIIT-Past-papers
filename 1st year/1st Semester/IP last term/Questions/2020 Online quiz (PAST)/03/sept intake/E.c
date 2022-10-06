#include<stdio.h>
int main(void)
{
	int arrNum[6] = {0};
	int i, j;
	
	printf("Enter Values to array : \n");
	for(i=0 ; i<6 ; i++)
	{
		scanf("%d" , &arrNum[i]);
		
		if(i>0)
		{
			if(arrNum[i] < arrNum[i-1])
				j++;
			else 
				j=0;
		}
		
	}
	
	if(j == 6)
		printf("\n\nNumbers are stored in ascending order");
	
	else 
		printf("\n\nNumbers are not stored in ascending order.");
	
	return 0;
}
