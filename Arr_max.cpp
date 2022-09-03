#include<stdio.h>
int main()
{
	int arr[]={5,2,-1,25,66,98,7,56,89,111},n;
	
	n=sizeof(arr)/sizeof(arr[0]);
	
	int max,i;
	max=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		
		
	}
	
	printf("%d",max);
	
	
	
	
}