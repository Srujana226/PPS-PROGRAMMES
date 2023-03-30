#include<stdio.h>
void main()
{
	char ch;
	float a,b,result;
	printf("give the values of a,b=");
	printf("\n enter the operator=");
	scanf("%f%c%f",&a,&ch,&b);
	switch(ch)
	{
		case '+':printf("result=a+b");
		break;
		case '-':("result=a-b");
		break;
		case '*':("result=a*b");
		break;
		case '/':("result=a/b");
	}
}
