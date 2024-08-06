#include <iostream>
using namespace std;
int main() {
    int a=0,b=1,c,n;
    cout<<"enter the limit : ";
    cin>>n;
    cout<<a <<"\n"<<b<<"\n";
    for (int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"\n";
    }
    

    return 0;
}
