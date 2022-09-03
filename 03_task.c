#include<stdio.h>
int main()
{
	int ndays,year,week,day;
	printf("Enter the number of days:\n");
	scanf("%d",&ndays);
	
	year=ndays/365;

	week=(ndays%365)/7;
	day=(ndays%365)%7;
	
	printf("The %d days are equal to %d year %d week and %d days",ndays,year,week,day);
	
}