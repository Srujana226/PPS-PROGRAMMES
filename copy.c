#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fs,*fd;
	int ch;
	if(argc!=3)
	{
		printf("\n invalid no of arguments");
		return 1;
	}
	fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		printf("\n cant open file");
		return 1;
	}
	fd=fopen(argv[2],"w");
	if(fd==NULL)
	{
		printf("\ncant open the file");
		fclose(fs);
		return 1;
	}
	while(1)
	{
		ch=fgetc(fs);
		if(feof(fs))
		break;
		fputc(ch,fd);
	}
	fclose(fs);
	fclose(fd);
}
