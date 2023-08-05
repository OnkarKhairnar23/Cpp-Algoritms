#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b>a)
        swap(a,b);
    if(b==a)
        return b;
    if(a<=1)
        return 1;
    return gcd(a-b,b);
}

int main()
{
    int a=18,b=12;
    
    int g=gcd(a,b);
    cout<<g;
    return 0;
}
