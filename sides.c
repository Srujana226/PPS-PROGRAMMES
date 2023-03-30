#include<stdio.h>
#include<math.h>
void main()
{
	int amount,total;
	printf("amount into smallest possible notes");
	scanf("%d",&amount);
	total=amount/500;
	printf("\n %d notes of 500",total);
	amount=amount-(total*500);
	total=amount/100;
	printf("\n %d notes of 100",total);
	amount=amount-(total*100);
	total=amount/50;
	printf("\n %d notes of 50",total);
	amount=amount-(total*50);
	total=amount/20;
	printf("\n %d notes of 20",total);
	amount=amount-(total*20);
	total=amount/10;
	printf("\n %d notes of 10",total);
	amount=amount-(total*10);
	total=amount/5;
	printf("\n %d notes of 5",total);
	amount=amount-(total*5);
}
