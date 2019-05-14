#include<stdio.h>
int main()
{
	int n[10],a,i;
	printf("Enter the number of integers:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	scanf("%d",&n[i]);
	}
	printf("Reversing numbers:");
	for(i=a-1;i>=0;i--)
	{
		printf("%d\n",n[i]);
	}
	return 0;
	
}
