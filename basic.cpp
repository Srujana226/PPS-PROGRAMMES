#include<stdio.h>
int main()
{
	float basic,gross,DA,HRA;
	printf("enter the basic salary of an employee=");
	scanf("%f",&basic);
	if(basic<=1000)
{
	DA=basic*80/100;
	HRA=basic*20/100;
}
     else if(basic<2000)
     {
     	DA=basic=90/100;
     	HRA=basic*25/100;
	 }
	 else
	 {
	 	DA=basic*95/100;
	 	HRA=basic*30/100;
	 }
	 gross=basic+HRA+DA;
	 printf("gross salary of a person=%2f",gross);
	}
