#include<stdio.h>
int main()
{
	int x,y,i,n;
	printf("Enter the values of x,y:");
	scanf("%d%d",&x,&y);
	for(i=0;i<=n;i++)
	x=y*i;
	printf("%d*%d=%d",y,i,x);
	return 1;
}
