#include<stdio.h>
void main()
{
	int a=0,b=1,c,i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("%d%d",a,b);
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%\n%d",c);
		a=b;
		b=c;
	}
}
