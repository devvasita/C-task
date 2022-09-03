#include<stdio.h>
int main()
{
	int n,i,sumeven=0,sumodd=0;
	printf("Enter a number to print 1 to n.. numbers:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{	printf("%d  ",i);
			sumeven= sumeven+i;		
		}
		else
		{
			printf("%d  ",i);
			sumodd = sumodd+i;
			}	
	}
	printf("\nsum of all even numbers =%d",sumeven);
	
	
	printf("\n\nsum of all odd numbers =%d",sumodd);
	
}