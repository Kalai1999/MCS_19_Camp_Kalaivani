#include<stdio.h>
 int main()
 {
	int n,m;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i,j=0,k=0;
	printf("Enter the number:");
	scanf("%d",&n);
	    for(i=0;i<m;i++)
	    {
		if(i==0)
		a++;
		else if(i==1)
		b++;
		else if(i==2)
		c++;
		else if(i==3)
		d++;
		else if(i==4)
		e++;
		else if(i==5)
		f++;
		else if(i==6)
		g++;
		else if(i==7)
		h++;
		else if(i==8)
		j++;
		else if(i==9)
		k++;
		}
		for(i=0;i<10;i++)
		{
	       if(i==0)
		   printf("%d  %d",i,a);
		   else if(i==1)
		   printf("%d  %d",i,b);
		   else if(i==2)
		   printf("%d  %d",i,c);
		   else if(i==3)
		   printf("%d  %d",i,d);
		   else if(i==4)
		   printf("%d  %d",i,e);
		   else if(i==5)
		   printf("%d  %d",i,f);
		   else if(i==6)
		   printf("%d  %d",i,g);
		   else if(i==7)
		   printf("%d  %d",i,h);
		   else if(i==8)
		   printf("%d  %d",i,j);
		   else if(i==9)
		   printf("%d  %d",i,k);
		}
	return 0;
 }
