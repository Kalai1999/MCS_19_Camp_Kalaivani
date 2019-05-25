#include<stdio.h>

void getdata(int m,int n,int a[10][10]);
void display(int m,int n,int a[10][10]);
void mul(int m,int n,int m1,int n1,int a[10][10],int b[10][10],int c[10][10]);

int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2;
int main()
{   
	
	do{
	
	printf("Enter the number of rows of matrix A:");
	scanf("%d",&r1);
	printf("Enter the number of columns of matrix A:");
	scanf("%d",&c1);
	printf("Enter the number of rows of matrix B:");
	scanf("%d",&r2);
	printf("Enter the number of columns of matrix B:");
	scanf("%d",&c2);
	}while(c1!=r1);
	printf("Enter the numbers of matrix A:");
	getdata(r1,c1,a);
	printf("Enter the numbers of matrix B:");
	getdata(r2,c2,b);
	printf("Matrix A:\n");
	display(r1,c1,a);	
	printf("Matrix B:\n");
	display(r2,c2,b);
	mul(r1,c1,r2,c2,a,b,c);	
	printf("Result:\n");
	display(r1,c1,c);	
	return 0;
	}
void getdata(int m,int n,int a[10][10])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int m,int n,int a[10][10])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
}
void  mul(int r1,int c1,int r2,int c2,int a[10][10],int b[10][10],int c[10][10])
{int i,j,k;
	
	for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }

}
