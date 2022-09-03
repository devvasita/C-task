#include<stdio.h>
int  main()
{
	
	
	int arr[10],n,i,max,max2,max3;

	n=sizeof(arr)/sizeof(arr[0]);
	
	printf("Enter the elements of arry to find its max and second max value:\n");
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&arr[i]);
	}
	
	printf("Elemets of the array :\n");
	
		for(i=0;i<n;i++)
	{
		
		printf("%d  ",arr[i]);
	}
	
	max=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	printf("\nmax = %d",max);
	
//	int arr[]={1,5,6,9,44,56,23}
	max2=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>max2 && arr[i]!=max)
		
		{
			max2=arr[i];
		}
	}
	
	printf("\nmax2 = %d",max2);
	
	max3=arr[0];
	
		for(i=0;i<n;i++)
	{
		if(arr[i]>max3 && arr[i]!=max && arr[i]!=max2)
		
		{
			max3=arr[i];
		}
		
	}
	
	printf("\nmax3 = %d",max3);
	
	
	
	
}