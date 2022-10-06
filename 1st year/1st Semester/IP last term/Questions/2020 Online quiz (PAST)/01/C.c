// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>

int main(void)
{
	int pz_opt  = 0, top_opt;
	char size;
	int num;
	char top_cho;
	float tot = 0;
	char x ;
	int top_1,top_2,top_3,top_4,top_sum;
	
	printf("Input Pizza Option :");
	scanf(" %d", &pz_opt);
	
	printf(" Size of Pizza (P/M/L):");
	scanf(" %c", &size);
	
	printf("Number of Pizzas :");
	scanf(" %d", &num);
	
	if(pz_opt == 1)
	{
			if(size == 'P')
			{
				tot = 560.00 * num ;	
			}
			else if(size == 'M')
			{
				tot = 920.00 * num ;
			}
			else if(size == 'L')
			{
				tot = 1800 * num ;
			}
			else
			{
				printf("Invalid\n\n");
			}
	}
	else if(pz_opt == 2)
	{
			if(size == 'P')
			{
				tot = 340 * num;	
			}
			else if(size == 'M')
			{
				tot = 660 * num;
			}
			else if(size == 'L')
			{
				tot = 1300 * num;
			}
			else
			{
				printf("Invalid\n\n");
			}
	}
	
	else if(pz_opt  == 3)
	{
			if(size == 'P')
			{
				tot = 760 * num;	
			}
			else if(size == 'M')
			{
				tot = 1100 * num;
			}
			else if(size == 'L')
			{
				tot = 2100.00 * num;
			}
			else
			{
				printf("Invalid\n\n");
			}
	}
	else 
	{
		printf("Invalid\n\n");
	}
	
	while (x!= 'n' && x != 'N')
	{
		printf("Do you Need any Extra Toppings (y/n) : ");
		scanf(" %c", &top_cho);
		x = top_cho;
		if(top_cho == 'y' || top_cho =='Y')
		{
			printf("Input your Option : ");
			scanf(" %d", &top_opt);
			switch(top_opt)
			{ 
				case 1: 
					tot = tot +(320 * num);
					//top_sum = top_sum + top_1;
					break;
				case 2:
					tot = tot+ 140 * num;
					//top_sum = top_sum + top_2;
					break;
				case 3:
					tot = tot + 130 * num;
					//top_sum = top_sum + top_3;
					break;
				case 4:
					tot = tot+ 150 *num; 
					//top_sum = top_sum + top_4;
					break;
				default : printf("Invalid\n\n");
			}
			 
		}
	}
	
	printf("Total Price : %.2f", tot);
	return 0;
}
