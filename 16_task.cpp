#include<stdio.h>
int main()
{
	int bs,Gross;
	
	printf("Enter your basic salary:");
	scanf("%d",&bs);
	
	if(bs<=10000)
	{
		Gross= bs + (bs*0.2) + (bs*0.8);
	}
	
	if(bs>10000 && bs<=20000)
	{
		Gross= bs + (bs*0.25) + (bs*0.9);
	}
	
	if(bs>20000)
	{
		Gross= bs + (bs*0.3) + (bs*0.95);
	}
	
	printf("Gross salary=%d",Gross);
	
	
}