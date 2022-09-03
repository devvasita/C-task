#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a natural number:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum= sum + i;
		printf("%d  ",i);
	}
	
	printf("\nThe sum of the first %d  natural numbers is=%d",n,sum);
	
}