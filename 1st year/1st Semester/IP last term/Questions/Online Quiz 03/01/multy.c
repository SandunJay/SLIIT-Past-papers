#include<stdio.h>
int multiply(int a, int b);
void printTable(int num, int range , int multy);

int main (void)
{
	int num1 , num2 ,multy ,x;
	
	printf("Enter the number :");
	scanf("%d" , &num1);
	
	printf("Enter the range :");
	scanf("%d" , &num2);
	
	for(x=1 ; x<= num2 ; ++x)
	{
		multy = multiply(num1 , x);
		printTable(num1  , x, multy);
	}
	
	return 0;
}

int multiply(int a, int b)
{
	float multy ;
	
	multy = a * b;
	
	return multy;
}

void printTable(int num, int range , int multy)
{
		printf(" %d * %d = %d \n", num , range , multy);
}
