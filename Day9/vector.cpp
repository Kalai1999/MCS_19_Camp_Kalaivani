#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
  
int main() 
{ int ch,n,m;
    vector<int> a;
    do{
    	cout<<"\n\t\tMenu\t\t\n1.push\n2.pop\n3.display\n4.exit\n";
    	cout<<"Enter your choice:";
    	cin>>ch;
    	switch(ch)
    	{
    		case 1:cout<<"Enter the value:";cin>>n;
    			a.push_back(n);
    		break;
    		case 2: a.pop_back();
				m=a.size(); 
    			cout << "\nThe last element is deleted";  
			break;
			
			case 3:  cout << "The vector elements are: "; 
   			for (int i = 0; i < a.size(); i++) 
       		cout << a[i] << " "; 
			break;
			case 4: exit(0);
			break;
			default:cout<<"Invalid option"; 		
			break;	
		}
    	
	}while(ch!=5);
	
	 return 0;
}
