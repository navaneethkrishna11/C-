#include<iostream>
using namespace std;

int main()
{
 int x,i;
 int n=7;
 for(i=1;i<n;i++)
 {
   for(x=1;x<n-i;x++)
   {
     cout << x <<"\t";
    }
    cout <<"\n";
 }
  
}


/*
1	2	3	4	5	
1	2	3	4	
1	2	3	
1	2	
1	
*/
