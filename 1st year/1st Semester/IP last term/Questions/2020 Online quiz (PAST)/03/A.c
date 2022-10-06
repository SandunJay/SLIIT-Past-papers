#include<stdio.h>
int main(void)
{
	int rate[5] = {0} ;
	int i , j  ;
	
	while(i != -1)
	{
		printf("Pls input the service rating (1- 5):");
		scanf("%d" , &i);
		
		switch(i)
		{
			case 1:
				rate[0] = rate[0] + 1;
				break;
			case 2 :
				rate[1] = rate[1] + 1;
				break;
			case 3 :
				rate[2] = rate[2] + 1;
				break;
			case 4 :
				rate[3] = rate[3] + 1;
				break;
			case 5 :
				rate[4] = rate[4] + 1;
				break;
		//	default :
		//		printf("Error\n");
		}
	}
	
	int k = 10;
	printf("\n %d \n" , k);
	printf("Rating \t Number of response\n");
	for(j=0 ; j < 5 ; j++)
	{
		printf("%d \t %d\n" , j+1 , rate[j] );
	}
	return 0;
}
