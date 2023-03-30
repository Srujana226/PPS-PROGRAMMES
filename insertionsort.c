#include<stdio.h>
void insertionsort(int[],int);
void main()
{
	int a[10],i,n;
	printf("enter the no of elements in the list" );
	scanf("%d",&n);
	printf("enter the elements in the list");
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
	printf("elements before sorting the list\n");
    for(i=0;i<n;i++)
    {
	printf("%3d",a[i]);
    }
	insertionsort(a,n);
    printf("elements after sorting the list\n");
    for(i=0;i<n;i++)
    {
	printf("%3d",a[i]);
    }
}
void insertionsort(int a[10],int n)
 {
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}	
		}
	}
 }

