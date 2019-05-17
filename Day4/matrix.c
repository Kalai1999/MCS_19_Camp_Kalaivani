#include<stdio.h>
int main()
{
	int i,j,m,n,a[15][15];
	printf("Enter the number of rows:");
	scanf("%d",&n);
 	printf("Enter the number of columns:");
	scanf("%d",&m);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{for(j=0;j<m;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	printf("Matrix form:\n");
	for(i=0;i<n;i++)
	{for(j=0;j<m;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
	}	
	
}
