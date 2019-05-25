
#include<stdio.h>
void checkprime(int N){
        int i,count = 0;
        for(i = 1;i <= N;++i )
            if( N % i == 0 )
                count++;
        if(count == 2)
           printf("%d is a prime number.",N); 
        else
            printf("%d is not a prime number.",N);
    }
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	checkprime(n);
	return 0;
}
