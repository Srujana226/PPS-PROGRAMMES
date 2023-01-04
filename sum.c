#include<stdio.h>
int sumofar(int);
void main()
{ 
	int a[],n,i,res;
	printf("Enter number of array elements : ");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",a[i]);	
	res = sumofar(a[i]);
	printf("\nThe sum of array elements is %d",res);
}
int sumofar(int [])
{
	if 
