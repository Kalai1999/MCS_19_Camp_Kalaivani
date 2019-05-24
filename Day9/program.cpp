#include<iostream>
using namespace std;

int main()
{
	int a[10],n;
	int i;
	int count=0,count1=0;
		cout<<"Enter the number of elements:";
		cin>>n;
		cout<<"Enter the elements:";
		for(i-0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			count++;
			else if(a[i]==0)
			count1++;
		}
		cout<<"No of 1's:"<<count;

		cout<<"\nNo of 0's :"<<count1;
		cin>>count1;
	return 0;
	
}
