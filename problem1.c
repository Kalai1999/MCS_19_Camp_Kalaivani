#include<stdio.h>
int main()
{ 
	int a[50],k=0,c=0,i,n;
	printf("\t\tSum of multiples of 3 and 5\t\t\n");
	printf("Enter the limit ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%3==0||i%5==0)
		{
		a[k]=i;
		k++;
		}
	}
		for(i=0;i<k;i++)
	{
		printf("%d\n",a[i]);
		c+=a[i];
	}
	printf("Resultant value is %d",c);
	return 0;
}
