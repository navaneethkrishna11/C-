#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<< "Enter any character :";
    cin>>ch;
    
    if((ch>= 'a' && ch<='z')|| (ch>='A' )&&(ch<='Z'))
    {
        cout<<ch<<"= is an Alphabet";
    }
    else
    {
        cout<<ch<<"= is digit";
    }
    
}
