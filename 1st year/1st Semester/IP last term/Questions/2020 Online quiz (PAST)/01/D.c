// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>

int main(void)
{
	int ar_opt=0;
	char clz_typ;
	int num = 0;
	char cho_ex_ser;
	int sr_opt = 0;
	int sr_price = 0;
	float tot = 0 ;
	
	printf("Input Airline Option : ");
	scanf(" %d", &ar_opt);
	
	printf("Class Type (E/B): ");
	scanf(" %c", &clz_typ);
	
	printf("Number Of Seat : ");
	scanf(" %d", &num);
	
	do
	{
		printf("Do you need any extra services (y/n):");
		scanf(" %c", &cho_ex_ser);
		
		if(cho_ex_ser =='y' || cho_ex_ser =='Y')
		{
		printf("Input Your Option :");
		scanf(" %d", &sr_opt );
		
			switch(sr_opt)
			{
				case 1: 
					sr_price = sr_price + 7800;
					break;
				case 2: 
					sr_price = sr_price + 1500;
					break;
				case 3: 
					sr_price = sr_price + 19500;
					break;
				case 4: 
					sr_price = sr_price + 2000;
					break;
				default : printf("Invalid\n\n");
			}
		}
		else if(cho_ex_ser == 'n' || cho_ex_ser == 'N')
		{
			break;
		}
		else
		{
		}
	}
	while(cho_ex_ser =='y' || cho_ex_ser =='Y');
	
	switch(ar_opt)
	{
		case 1: 
			if (clz_typ == 'E')
			{
				tot = 36500 * num;
			}
			else if (clz_typ == 'B')
			{
				tot = 77600 * num;
			}
			break;
		case 2: 
			if(clz_typ == 'E')
			{
				tot = 35800 * num;
			}
			else if (clz_typ == 'B')
			{
				tot = 76500 * num;
			}
			break;
		case 3: 
			if(clz_typ == 'E')
			{
				tot = 54600 * num;
			}
			else if (clz_typ == 'B')
			{
				tot = 84700 * num;
			}
			break;
		case 4: 
			if(clz_typ == 'E')
			{
				tot = 28500 * num;
			}
			else if (clz_typ == 'B')
			{
				tot = 42800 * num;
			}
			break;
		default : printf("Invalid \n\n");
		
	}
	
	tot = tot + (sr_price );
	printf("Total Price : %.2f" , tot);	
	
	return 0;
}
