#include<iostream>
using namespace std;

int main()
{
 int x,i;
 for(i=0;i<6;i++)
 {
   for(x=0;x<i;x++)
   {
     cout << x <<"\t";
    }
    cout <<"\n";
 }
  
}

/*
0	
0	1	
0	1	2	
0	1	2	3	
0	1	2	3	4
*/
