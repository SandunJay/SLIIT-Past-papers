 /*  Name - Tharush Upamal Senasinghe 
	 IT number -  IT21073878 
  	 2021 Batch , Malabe campus , group 05.1.A  */ 	
  	 
#include<stdio.h>
int main(void)
{
	//declare Variables
	
	int  marks[5][2] ={0};    //declare mark array     
	int i , j;
	float final;
	float finalMark[5] = {0};	//declare final mark array     
	
	//getting input for array
	for(i=0 ; i<5 ; i++)
	{
		printf("Enter student %d marks : \n" , i+1);
		for(j=0 ; j<2 ; j++)
		{
			printf("component %d : " , j+1);
			scanf("%d"  , &marks[i][j] );	
		}
		
		// calculating final mark of each student
		finalMark[i] = (marks[i][0] * (40.0 / 100) ) + (marks[i][1] * (60.0 / 100)) ;	
	}
	
	//Display the final marks
	for(i=0 ; i<5 ; i++)
	{
		printf("\nStudent %d Final Mark is : %.2f\n" , i+1 , finalMark[i]);
	}
	
	return 0;  //end
}
