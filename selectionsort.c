#include<stdio.h>
void selection(int[],int);
void main()
{
	int a[20],n,i;
	printf("enter the no of elements in list ");
	scanf("%d",&n);
	printf("enter the elements in the list");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements before sorting");
	for(i=0;i<n;i++)
    {
    	printf("%3d",a[i]);
	}
	selection(a,n);
	printf("\n5elements after sorting ");
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
		}	
}
void selection(int a[20],int n)
{
	int min,i,j,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(a[j]>a[min])
			min=j;
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
