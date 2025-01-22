#include<iostream>
using namespace std;

int main()
{
  int n=6;
  int i,j,k;
  
  for(i=1;i<n;i++)
  {
    for(j=1;j<=i;j++)
    {        
      cout << j;  
    }
    for (j=1;j<n-i;j++)
    {
      cout << " ";
     }    
    for(j=i;j>=1;j--)
      {
       cout << j; 
      }
  
   cout << "\n";
   }
} 

/*
OUTPUT
-------
1    1
12   21
123  321
1234 4321
1234554321
*/
