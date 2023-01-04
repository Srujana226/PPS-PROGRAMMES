#include<stdio.h>
void main()
{
int *ptr,A[10],n,i,sum;
scanf("%d",&n);
ptr=&A[0];
for(i=0;i<n;i++)
scanf("%d",*ptr++);
sum=sum+*ptr;
for(i=0;i<n;i++)
printf("%d",sum);
}
