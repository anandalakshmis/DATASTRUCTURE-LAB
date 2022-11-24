#include<stdio.h>
void main()
{
	int a[55],temp,n,i,j;
	printf("enter the length of the array:");
	scanf("%d",&n);
	printf("before sorting array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1;j++)
	{
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
	}
	printf("\n listof sorted in Ascending order:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	
	}
	
	
