#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any Alphabet character:\n");
	scanf("%c",&ch);
	
	if(ch>='a'&& ch<='z')
	{
		printf("Lowercase Alphabet...");
	}
	else if(ch>='A'&& ch<='Z')
	{
		printf("Uppercase Alphabet...");
	}
	else{
		printf("Not an alphabet...");
	}
	
}