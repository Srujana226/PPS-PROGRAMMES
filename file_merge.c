#include<stdio.h>
void main()
{
	FILE *fp1,*fp2,*fp3;
	char c;
	fp1=fopen("hello.txt","r");
	fp2=fopen("nice.txt","r");
	fp3=fopen("mrng.txt","a");
	if(fp1==NULL||fp2==NULL||fp3==NULL)
	{
	
puts("\n cant open");

}
while((c=fgetc(fp1))!=EOF)
fputc(c,fp3);
while((c=fgetc(fp2))!=EOF)
fputc(c,fp3);
printf("\n merged the files");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}

