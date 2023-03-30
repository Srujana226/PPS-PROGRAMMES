#include<stdio.h>
void main()
{
	char c;
	printf("enter a character =");
	scanf("%c",&c);
	if ((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
	{
	printf("%c is alphabet",c);
    }
	else
	{
	printf("%c is not a alphabet",c);
    }
}
