#include<stdio.h>

void avg(int mark[3][4] );
void hig(int mark[3][4] );
void min(int mark[3][4] );

int main(void)
{
	int mark[3][4] = {0};
	int i,j;
	
	
	for(i=0 ; i<3 ; i++)
	{
		printf("Student no : %d\n" , i+1 );
		
		for(j=0 ; j<4 ; j++)
		{
			scanf("%d" , &mark[i][j]);
		}
	}
	puts(" ");

		printf("The Array is : \n");
		for(j=0 ; j<4 ; j++)
		{
			printf("[%d] " , j);
		}
	puts(" ");
	
	for(i=0 ; i<3 ; i++)
	{
		printf("Student Grades[%d] " , i);
		for(j=0 ; j<4 ; j++)
		{
			printf("%d " , mark[i][j]);
		}
		puts(" ");
	}
	puts(" ");
	
	min(mark);
	hig(mark);
	avg(mark);

	return 0;
}


void avg(int mark[3][4])
{
	int i,j;
	float tot=0 , avg;
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			tot = tot + mark[i][j];
		}
		avg = tot / 4.0  ;
		printf("\nAverage of Student no  %d is : %.2f \n" , i+1 , avg);
		tot = 0;
	}
}

void hig(int mark[3][4] )
{
	int i,j;
	float hig =-99 ;
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			if(hig < mark[i][j])
				hig = mark[i][j];
		}
	}
	
	printf("\nHight Grade Is : %.2f \n" , hig);
	
}

void min(int mark[3][4] )
{
	int i,j;
	float min = 1000 ;
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			if(min > mark[i][j])
				min = mark[i][j];
		}
	}
	printf("Lowset Grade Is : %.2f \n" , min);
	
}

