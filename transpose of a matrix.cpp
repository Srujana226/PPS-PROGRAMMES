#include<stdio.h>
int mat();
int main()
{
	int a[10][10],i,j,r,c,c1[10][10];
	printf("enter elements of matrice a");
	for(i=0;i<r;i++)
	   for(j=0;j<c;j++)
		  scanf("%d",&a[i][j]);	
    printf("\n");
	printf("transpose of a matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",c1[i][j]);
		}
		printf("\n");
    }	   
}h
