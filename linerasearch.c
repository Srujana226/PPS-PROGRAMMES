#include<stdio.h>
int linear(int[],int,int);
int main()
{
	int a[20],i,n,key,pos;
	printf("enter the no of elements in list");
	scanf("%d",&n);
	printf("enter the elements in the list");
	for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
	printf("enter the key you want to search");
	scanf("%d",&key);
	pos=linear(a,n,key);
	if(pos==-1)
	printf("element is not found");
	else
	printf("element is found at %d position",pos+1);
}
int linear(int a[20],int n,int key)
{
	int i,k;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
		k=i;
     	}
    }
	if(k==0)
    return -1;
	else
	return k;			
}
