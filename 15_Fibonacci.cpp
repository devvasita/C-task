#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i,sum=0;
	printf("Enter the number to print 1 to n... fibonacci numbers:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d  ",a);
		c=a+b;
		a=b;
		b=c;
	
		
	}
}


