#include<stdio.h>

int main()
{
	int i,n,a[20],m;
	printf("Enter the number of array:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter the number to be searched:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
	if(a[i]==m)
	printf("The index of the number is %d",i+1);
	}
	return 0;
}
