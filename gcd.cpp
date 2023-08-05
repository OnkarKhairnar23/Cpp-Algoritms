#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==a)
        return b;
    if(a>b)
        return gcd(a-b,b);
    else 
        return gcd(a,b-a);
}

int main()
{
    int a=18,b=12;
    
    int g=gcd(a,b);
    cout<<g;
    return 0;
}
