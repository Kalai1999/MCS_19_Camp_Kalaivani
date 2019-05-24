
#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
  
//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
  
    list <int> gqlist1, gqlist2,glist; 
  
  
    for (int i = 0; i < 10; ++i) 
    { 
        gqlist1.push_back(i * 5); 
        gqlist2.push_front(i * 3);
		glist.push_back(i*10); 
    } 
    cout << "\nList 1 is : "; 
    showlist(gqlist1); 
  
    cout << "\nList 2 is : "; 
    showlist(gqlist2); 
    
  	cout << "\nList 3 is : "; 
    showlist(glist); 
  
    cout << "\ngqlist1.front() : " << gqlist1.front(); 
    cout << "\ngqlist1.back() : " << gqlist1.back(); 
  	cout<<"\nglist.front(): "<<glist.front();
  	
    cout << "\ngqlist1.pop_front() : "; 
    gqlist1.pop_front(); 
    showlist(gqlist1); 
  
    cout << "\ngqlist2.pop_back() : "; 
    gqlist2.pop_back(); 
    showlist(gqlist2); 
  
    cout << "\nglist.reverse() : "; 
    glist.reverse(); 
    showlist(glist); 
  
    cout << "\ngqlist1.sort(): "; 
    gqlist1.sort(); 
    showlist(gqlist1); 
  
    return 0; 
  
} 
