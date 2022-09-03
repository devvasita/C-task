#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any alphabet character:\n ");
	scanf("%c",&ch);
	
	(ch>='a'&& ch<='z')||(ch>='A'&& ch<='z') ? printf("This is Alphabet...") : printf("This is not an Alphabet...");
}