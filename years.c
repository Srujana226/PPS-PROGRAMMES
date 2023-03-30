+#include<stdio.h>
#include<math.h>
void main()
{
	int days,weaks,months,years;
	printf("no of days");
	scanf("%d",&days);
	years=(days/365);
	weaks=(days/365)/7;
	days=(days-(years*365)+(weaks*7));
	printf("years:%d \n",years);
	printf("weaks:%d\n",weaks);
	printf("days:%d\n",days);
	
}
