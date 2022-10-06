// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A
#include<stdio.h>
int main(void)
{
	char ins_typ;
	char status;
	char answer;
	int no_of_children;
	float tot , additional;
	
	do
	{
		printf("Insurance Type : ");
		scanf(" %c" , &ins_typ);
	
		printf("Family or Individual ( F- family and I – individual) : ");
		scanf(" %c" , &status);
		

			
		switch (ins_typ)
		{
			case 'A': 
			if(status == 'I')
			{
				tot = 4500.00;
			}
			else if(status == 'F')
			{
				printf("Number of children :");
				scanf("%d" , &no_of_children);
				if(no_of_children > 2)
				{
					tot = 5200.00;
					additional = (tot *(10/100.0)) * (no_of_children - 2);
				}
			}
		else 
			printf("Invalid Input\n");
			break;
			
			case 'N' :
				if(status == 'I')
				{
					tot = 3100.00;
				}
				else if(status == 'F')
				{
					printf("Number of children :");
					scanf("%d" , &no_of_children);
					if(no_of_children > 2)
					{
						tot = 4300.00;
						additional = (tot *(10/100.0)) * (no_of_children - 2);
					}
				}
		else 
			printf("Invalid Input\n");
			break;
		
			
			case 'D' :
				if(status == 'I')
				{
				tot = 3600.00;
				}
				else if(status == 'F')
				{
				printf("Number of children :");
				scanf("%d" , &no_of_children);
					if(no_of_children > 2)
					{
						tot = 4800.00;
						additional = (tot *(10/100.0)) * (no_of_children -2);
					}
				}
		else 
			printf("Invalid Input\n");
			break;
			
			case 'S' :
				if(status == 'I')
				{
					tot = 3800.00;
				}
				else if(status == 'F')
				{
					printf("Number of children :");
					scanf("%d" , &no_of_children);
					if(no_of_children > 2)
					{
						tot = 3300.00;
						additional = (tot *(10/100.0)) * (no_of_children - 2);
					}
				}
				else 
					printf("Invalid Input\n");
			break;
			
			default :
				printf("Invalid Input \n");
		}
		
	
		

		
	tot = tot + additional;	
	printf("Total Amount : %.2f\n" , tot);
	
	printf("Do you want to continue? (Y or N) : ");
	scanf(" %c" , &answer);
	
	
	}while(answer != 'N' && answer != 'n');
	
	return 0;
}
