#include<stdio.h>  
int main()    
{    
int n,rem,rev=0,orginal;    
printf("enter the number=");    
scanf("%d",&n);    
orginal=n;    
while(n>0)    
{    
rem=n%10;    
rev=(rev*10)+rem;    
n=n/10;    
}    
if(orginal==rev)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}  
