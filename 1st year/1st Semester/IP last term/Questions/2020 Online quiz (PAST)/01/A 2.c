// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>

int main(void)
{
	int roomNum = 0;
	int noOfDays;
	char accomType;
	char cardType;
	float amt;
	int x;
	
	do
	{
		printf("Enter type of room :");
		scanf(" %d", &roomNum);
	
		if(roomNum != -1 )
		{
		
			switch(roomNum)
			{
				case 1: 
					printf("Enter Accommodation Basis(F/H) :");
					scanf(" %c", &accomType);
					printf("Enter No of Days :");
					scanf(" %d", &noOfDays);
					printf("Enter Reward card Type(G , S , B) :");
					scanf(" %c", &cardType);
					
					if(accomType == 'F')
					{
						if(cardType == 'G')
						{
							amt = (25555.00 * noOfDays) * (87.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'S')
						{
							amt = (25555.00 * noOfDays) * (88.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'B')
						{
							amt = (25555.00 * noOfDays) * (90.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else 
						{
							printf("Invalid\n");
						}
						
					}
					else if (accomType == 'H')
					{
						if (cardType == 'G')
						{
							amt = (17250.00 * noOfDays) * (87.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'S')
						{
							amt = (17250.00 * noOfDays) * (88.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'B')
						{
							amt = (17250.00 * noOfDays) * (90.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else 
						{
							printf("Invalid\n");
						}
						
					}
					else
					{
						printf("Invalid\n");
					}
					break;
				
				case 2:
					printf("Enter Accommodation Basis(F/H) :");
					scanf(" %c", &accomType);
					
					printf("Enter No of Days :");
					scanf(" %d", &noOfDays);
					
					printf("Enter Reward card Type(G,S,B) :");
					scanf(" %c", &cardType);
					
					if(accomType == 'F')
					{
						if(cardType == 'G')
						{
							amt = (17500.00 * noOfDays) * (87.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'S')
						{
							amt = (17500.00 * noOfDays) * (88.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'B')
						{
							amt = (17500.00 * noOfDays) * (90.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else 
						{
							printf("Invalid\n");
						}
						
					}
					else if(accomType == 'H')
					{
						if(cardType == 'G')
						{
							amt = (12250.00 * noOfDays) * (87.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'S')
						{
							amt = (12250.00 * noOfDays) * (88.5 /100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'B')
						{
							amt = (12250.00 * noOfDays) * (90.5 /100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else 
						{
							printf("Invalid\n");
						}
						
					}
					else
					{
						printf("Invalid\n");
					}
					break;
				
				case 3:
					printf("Enter Accommodation Basis(F/H) :");
					scanf(" %c", &accomType);
					printf("Enter No of Days :");
					scanf(" %d", &noOfDays);
					printf("Enter Reward card Type(G,S,B) :");
					scanf(" %c", &cardType);
					
					if(accomType == 'F')
					{
						if(cardType == 'G')
						{
							amt = (9000.00 * noOfDays) * (87.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'S')
						{
							amt = (9000.00 * noOfDays) * (88.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'S')
						{
							amt = (9000.00 * noOfDays) * (90.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else 
						{
							printf("Invalid\n");
						}
						
					}
					else if(accomType == 'H')
					{
						if(cardType == 'G')
						{
							amt = (7250.00 * noOfDays) * (87.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'S')
						{
							amt = (7250.00 * noOfDays) * (88.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else if (cardType == 'S')
						{
							amt = (7250.00 * noOfDays) * (90.5 / 100);
							printf("Amount(Rs.) : %.2f\n\n" , amt);
						}
						else 
						{
							printf("Invalid\n");
						}
						
					}
					else
					{
						printf("Invalid\n");
					}
					break;
				
				default : printf("Invalid\n");
			}
		}
		else
		{ 
			printf("Invalid\n\n");
		}
	}while(roomNum = -1);
	
	
	return 0;
}
