#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter any integer number:\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n = n/10;
		count++;
	}
	
	printf("The number of digits in the number= %d",count);
}