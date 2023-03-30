#include<stdio.h>
void bubblesort(int[],int);
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
	bubblesort(a,n);
    printf("elements after sorting the list\n");
    for(i=0;i<n;i++)
    {
	printf("%3d",a[i]);
    }
}
void bubblesort(int a[10],int n)
 {
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp
			}	
		}
	}
 }

