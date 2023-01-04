#include<stdio.h>
void main()
{
int n,rem,sum=0;
printf("sum of digits of a given number=");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
printf("%d",rem);
n/10;
sum=rem;
}
printf("%d",sum);
}
