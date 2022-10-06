// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>

int main(void)
{
	int pz_opt;
	char size;
	int num;
	char top_cho;
	float tot;
	char x;
	
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
				tot = 556 * num;	
			}
			else if(size == 'M')
			{
				tot = 920 * num;
			}
			else if(size == 'L')
			{
				tot = 1800 * num;
			}
			else
			{
				printf("Invalid\n\n");
			}
	}
	else if(pz_opt = 2)
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
	else if(pz_opt = 3)
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
				tot = 2100 * num;
			}
			else
			{
				printf("Invalid\n\n");
			}
	}
	else 
	{
		print("Invalid\n\n");
	}
	
	while (x!= 'n' || x != 'N')
	{
		printf("Do you Need any Extra Toppings (y/n) : ");
		scanf(" %c", &top_cho);
		x = top_cho;
		if(top_cho == 'y')
		{
			
		}
	}
	
	return 0;
}
