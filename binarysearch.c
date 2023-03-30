#include<stdio.h>
int binary(int[],int,int);
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
	pos=binary(a,n,key);
	if(pos==-1)
	printf("element is not found");
	else
	printf("element is found at %d position",pos+1);
}
int binary(int a[20],int n,int key)
{
	int i,mid,low=0,high=n-1;
	while(high>=low)
    {
    	mid=(low+high)/2;
    	if(key>a[mid])
    	low=mid+1;
    	else if(key<a[mid])
    	high=mid-1;
    	else
    	return mid;
	}
	return -1;
}
