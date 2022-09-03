#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter any integer value:");
	scanf("%d",&n);
	
	i=n%10;
	printf("last digit=%d",i);
	
	while(n>10)
	{
		n=n/10;
	}
	printf("\nfirstdigit= %d",n);
	
	printf("\nsum of the firstdigit and lastdigit=%d",i+n);
	
}