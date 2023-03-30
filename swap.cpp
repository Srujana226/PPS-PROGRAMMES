#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("enter the values of a,b:");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
void swap(int x,int y)
{
int t;
t=x;
x=y;
y=t;
printf("inter change value :");
printf("%d%d",x,y);
}

