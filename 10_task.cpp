#include<stdio.h>
int main()
{
	char i;
	printf("small letters:\n");
	for(i='a';i<='z';i++)
		printf("%c  ",i);
		
	printf("\nCapital letters:\n");
	for(i='Z';i>='A';i--)
		printf("%c  ",i);
	
	
}	
