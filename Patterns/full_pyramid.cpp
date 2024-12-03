#include<iostream>
using namespace std;

int main()
{
  int i,j;
  int n=9;
  
  for(i=1;i<n;i++)
  {
    for(j=1;j<n-i;j++)
    {
      cout << " " ;
    }
    for(j=1;j<=(2*i)-1;j++)
    {
      cout << "_" ;
    }
    cout << "\n";
  }
  for(i=1;i<n;i++)
  {
    for(j=1;j<i;j++)
    {
      cout << " ";
    }
    for(j=1;j<=(2*(n-i)-1);j++)
    {
      cout << "_";
    }
    cout << "\n" ;
    }
}
    




/*
       _
      ___
     _____
    _______
   _________
  ___________
 _____________
_______________
_______________
 _____________
  ___________
   _________
    _______
     _____
      ___
       _

*/
