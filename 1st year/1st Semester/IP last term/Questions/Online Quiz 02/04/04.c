#include<stdio.h>
int main (void)
{
	int no_Players , player_Num ,x;
	int score1, score2, score3;
	float tot , max = 0;
	int max_person;
	
	printf("Input Number of players : ");
	scanf("%d" , &no_Players);
	
	for(x=1 ; x<= no_Players ; ++x)
	{
		printf("Input Player Number : %d\n" , x);
		
		printf("Input score 1 :");
		scanf("%d" , &score1);
		
		printf("Input score 2 :");
		scanf("%d" , &score2);
		
		printf("Input score 3 :");
		scanf("%d" , &score3);
		
		tot = score1 + score2 + score3;
		printf("Total Score : %.f\n" , tot);
		
		if(tot > max)
		{
			max = tot;
			max_person = x;
		}
		
	}
	 
	printf("Winner is : Player number %d - Highest score is : %.f" , max_person , max);
	
	return 0;
}
