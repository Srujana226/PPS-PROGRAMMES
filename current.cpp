#include<stdio.h>
int main()
{
	int unit;
	float amt,total_amt,sur_charge;
	printf("enter the total units consumed=");
	scanf("%d",&unit);
	{
		if(unit<=50)
		amt=unit*50/100;
		else if(unit<=150)
		amt=25+(unit-50)*75/100;
		else
		amt=220+(unit-150)*120/100;
	}
	sur_charge=amt*20/100;
	total_amt=amt=sur_charge;
	printf("electric bill=Rs%2f",total_amt);
	
}
