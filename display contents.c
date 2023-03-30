#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("mrng.txt","r");
	if(fp==NULL)
	printf("\n can't open file");
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
	}
}
