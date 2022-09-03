#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter any number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==00)
		{
			printf("%d\n",i);
		 	count++;
		}
	}
	if(count==2)
	{
		printf("\nPrime number...");
	}
	else
	{
		printf("Not a prime number...");
	}
	
}