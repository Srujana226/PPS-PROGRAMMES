#include<stdio.h>
int main()
{
	char ch;
	printf("give any character=");
	scanf("%cis alphabet",&ch);
	if((ch>='a'&&ch>='z')||(ch>='A'&&ch>='Z'))
    {
		printf("%cis alphabet",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
	printf("%c is a digit",ch);
	}
	else
	{
	printf("%c is a special charater");	
    }
}
