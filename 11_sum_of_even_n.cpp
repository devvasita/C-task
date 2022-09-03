#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a number to print 1 to n.. numbers:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{	printf("%d  ",i);
			sum= sum+i;		
		}
	
	}
	printf("\nsum of all even numbers =%d",sum);
	
}