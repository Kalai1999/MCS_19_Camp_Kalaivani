#include <iostream> 
using namespace std; 
  
void printUpperHalf(string str) 
{ 
    char first, second; 
    int pos = 0; 
      
    for (int i = 1; i <= 4; i++) { 
  
        first = str[pos]; 
        second = str[pos + 1]; 
        pos += 2; 
          
        for (int j = 4 - i; j >= 1; j--) 
            cout << " "; 
        cout << first; 
        for (int j = 1; j < i; j++) 
            cout << "--"; 
        cout << second << endl; 
    } 
} 
void printLowerHalf(string str) 
{ 
    char first, second; 
    int pos = 0; 
    for (int i = 1; i <= 4; i++) { 
  
        first = str[pos]; 
        second = str[pos + 1]; 
        pos += 2; 
          
        for (int j = 1; j < i; j++) 
            cout << " "; 
        cout << first; 
        for (int j = 4 - i; j >= 1; j--) 
            cout << "--"; 
        cout << second << endl; 
    } 
} 
  
void printDNA(string str[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
  
        int x = i % 6; 
          
        if (x % 2 == 0) 
            printUpperHalf(str[x]); 
        else
         printLowerHalf(str[x]); 
    } 
} 
  
int main() 
{ 
  
    int n = 8; 
      
    string DNA[] = { "ATTAATTA", "TAGCTAGC", "CGCGATAT", 
                   "TAATATGC", "ATCGTACG", "CGTAGCAT" }; 
    printDNA(DNA, n); 
      
    return 0; 
} 
