#include<stdio.h>
float calcIncrement(float salary, int noofYearsWorked);
float calcTotSalary(float salary, float increment);
int main(void)
{
	float salary , inc , tot;
	int yrs;
	
	printf("salary of an employee : ");
	scanf("%f" , &salary);
	
	printf("number of years worked : ");
	scanf("%d" , &yrs);
	
	inc = calcIncrement( salary, yrs);
	tot = calcTotSalary( salary, inc);
	
	printf("Increment : %.2f\n" , inc);
	printf("Total Salary : %.2f\n" , tot);
	return 0;
}
float calcIncrement(float salary, int noofYearsWorked)
{
	float increment;
	
	if(noofYearsWorked >= 2)
		increment = salary * (10.0 / 100);
	else
		increment = 0;
		
	return increment;
}
float calcTotSalary(float salary, float increment)
{
	float tot;
	tot = salary + increment ; 
	
	return tot;
}
