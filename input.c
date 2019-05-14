#include<stdio.h>
int main()
{
    int n;
    char s[15];
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the string:");
    scanf("%s",s);
    printf("Number *2:");
	printf("%d\n",n*2);
    printf("String is ");
    printf("%s",s);
    return 0;
}
