#include<stdio.h>
void main()
{
	int week;
	printf("give week number=");
	scanf("%d",&week);
	switch(week)
	{
		case 1:printf("monday");
		break;
		case 2:printf("tuesday");
		break;
		case 3:printf("wensday");
		break;
		case 4:printf("thursday");
		break;
		case 5:printf("friday");
		break;
		case 6:printf("saturday");
		break;
		case 7:printf("sunday");
	}
}
