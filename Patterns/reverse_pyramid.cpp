#include<iostream>
using namespace std;
int main()
{
 int x,i,k;
  int n=6;
   for(i=1;i<n;i++)
   { 
     
    for(x=1;x<i;x++)
    {    
      cout << " " ;  
    }   
    
    for (x = 1; x <= (2 * (n - i)) - 1; x++) 
        {
            cout << "*";
        }
   cout << "\n";
   } }
