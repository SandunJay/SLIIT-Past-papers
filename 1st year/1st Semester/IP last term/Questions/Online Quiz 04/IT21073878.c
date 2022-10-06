 /*  Name - Tharush Upamal Senasinghe 
	 IT number -  IT21073878 
  	 2021 Batch , Malabe campus , group 05.1.A  */ 	
  	 
#include<stdio.h>
int main(void)
{
	// declare variables
	int testMarks[10] ;  //integer array
	int i ;
	float sum = 0 , avg = 0;
	
	//Initialize all the array elements to -1
	for(i = 0; i<10 ; i++)
	{
		testMarks[i] = -1;
	}
	
	
	for(i = 0; i<10 ; i++)
	{
		printf("Input Marks :");
		scanf("%d" , &testMarks[i]);  //geting input for  testMarks Arry
		
		
		if(testMarks[i] < 0 || testMarks[i] > 100)  //cheking if marks are valid
		{
			printf("Invalid Marks. Re-enter\n");  //error message
			i--;
		}

		else
		{
			 sum = sum + testMarks[i]; //Calculating  sum for calculat average 
		}
		
	}
	
	avg = sum / i;  // calculating average
	
	//printing Input array 
	printf("\n\nInput array :");
	for(i = 0; i<10 ; i++)
	{
		printf(" %d\t" , testMarks[i]);
	}
	
	// Display the marks which will be qualified
	printf("\n\nPassed marks :");
	for(i = 0; i<10 ; i++)
	{
		if(testMarks[i] > avg)
		{
			printf("%d\t" , testMarks[i] );
		}
	}
	
	return 0;  // end
}
