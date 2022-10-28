#include <iostream>
#include<cmath>
using namespace std;


// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1


void prime_print(int a, int b){
    for (int i = a; i <= b; i++)
    {
        int count=0;
        for (int j = (i/2)+1; j > 0; j--)
        {
            if (i%j == 0)
            {
                count++;
                continue;
            }
            
        }
        if (count==1)
        {
            cout<<i<<" ";
        }
    }
    
}

int fact(int num){
    if (num==0 || num==1)
    {
        return 1;
    }
    return fact(num-1)*num;
}

int ncr(int n,int r){
    int a;
    a=fact(n)/(fact(n-r)*fact(r));
    return a;
}

void pascal(int num){
    for (int r = 0; r <= num; r++)
    {
        cout<<ncr(num,r)<<" ";
    }  
}

void print(int size){
    for (int n = 0; n < size; n++)
    {
        pascal(n);
        cout<<"\n";
    }
    
}

int main(){
    int a,b;
    cout<<"Enter two no.-";
    cin>>a>>b;
    int ncr1;
    ncr1=ncr(a,b);
    printf("%dC%d=%d",a,b,ncr1);

}



