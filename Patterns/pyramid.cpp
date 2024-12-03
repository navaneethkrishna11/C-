#include<iostream>
using namespace std;
int main()
{
 int x,i,k;
  int n=6;
   for(i=1;i<n;i++)
   {   
    for(x=1;x<n-i;x++)
    {    
      cout << " " ;  
    }   
    for(x=1;x<=(2*i)-1;x++)
    {
     
      cout << "*" ;
    }  
   cout << "\n";
   } }

/*
   *
   ***
  *****
 *******
*********


*/

#include<iostream>
using namespace std;
int main()
{
 int x,i,k;
   for(i=1;i<6;i++)
   {
    for(x=6;x-i>1;x--)
    {
        cout << " " ;
    } 
    for(x=1;x<i;x++)
    {  
    cout << "* " ;
   }
      
   cout << "\n";
   }  
}
/*
   * 
  * * 
 * * * 
* * * * 


*/
