#include <iostream>
int main(){
    int a=6,b=4;
    int temp;
    temp=a;
    a=b;
    b=temp;

    std::cout << a<<'\n'<<b;
}
