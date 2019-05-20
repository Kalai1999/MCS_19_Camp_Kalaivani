#include<stdio.h>



void insertion_sort ( int A[ ] , int n) 
{
	int i;
     for(i = 0 ;i < n ; i++ ) {
    
      int temp = A[ i ];    
      int j = i;

    while(  j > 0  && temp < A[ j -1]) {

                A[ j ] = A[ j-1];   
                j= j - 1;

           }
           A[ j ] = temp;       
     }
     printf("\nSorted order is:");
     for(i = 0 ;i < n ; i++ ) {
	 printf("%d\t",A[i]);
	 
}
}
int main()
{
	int a[20],n,i;
	printf("\t\tAscending Order(Insertion Sort)\t\t\n");
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	return 0;

}
