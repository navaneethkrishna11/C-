#include<iostream>
using namespace std;

int main()
{
  int i,j;
  int n=9;
  
  for(i=1;i<n;i++)
  {
    
    for(j=1;j<i;j++)
    {
      cout << "_" ;
    }
    cout << "\n";
  }
  for(i=1;i<n;i++)
  {
    
    for(j=i;j<n;j++)
    {
      cout << "_";
    }
    cout << "\n" ;
    }
}
    




/*
_
__
___
____
_____
______
_______
________
_______
______
_____
____
___
__
_
*/
