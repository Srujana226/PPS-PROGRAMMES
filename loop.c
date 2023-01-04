#include<stdio.h>
void main()
{
int i,n;
printf("print even and odd number=");
scanf("%d",&n);
i=1;
while(i<=n)
{
if(i%2==0)
printf("\neven number %d\t",i);
if(i%2==!0)
printf("\nodd number %d\t",i);
i++;
}
}
