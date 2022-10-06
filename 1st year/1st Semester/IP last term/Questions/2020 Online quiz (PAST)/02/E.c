#include<stdio.h>
float findRadianValue(float angleInDegrees);
void printRadianValues(float rad);

int main(void)
{
	float degree;
	float rad;
	
	printf("Input degree of angle : ");
	scanf("%f", &degree);
	
	rad = findRadianValue(degree);
	printRadianValues(rad);
	
	
	return 0;
}
float findRadianValue(float angleInDegrees)
{
	float radian;
	radian = (22.0 / 7 ) / 180 * angleInDegrees ;
	
	return radian;
}
void printRadianValues(float rad)
{
	printf("Radian : %.2f" , rad );
}

