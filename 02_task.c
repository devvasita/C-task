#include<stdio.h>
int main()
{
	float cm,m,km;
	printf("Enter your length in cm:\n");
	scanf("%f",&cm);
	
	m=cm/100;
	km=m/1000;
	
	printf("The length in meter =%.2f",m);
	
	printf("\nThe length in kilometer =%.4f",km);
}