#include <iostream>
#include<cmath>
using namespace std;
/*
*
**
***
****
*****
****
***
**
*


#include <iostream>
using namespace std;
int main(){
    for (int i=1; i<10; i++){
        if (i<=5){
            for (int j = 0; j < i; j++){
                cout<<"*";
            }
        }
        if (i>5){
            for (int j = 0; j < 10-i; j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 11; i++)
    {
        if (i<=6)
        {
            for (int j = 0; j <6-i ; j++)
            {
                cout<<" ";
            }
            for (int k = 0; k < i; k++)
            {
                cout<<"* ";
            }

        }
        if (i>6)
        {
            for (int j = 0; j < i-6; j++)
            {
                cout<<" ";
            }
            for (int k = 0; k < 12-i; k++)
            {
                cout<<"* ";
            }

        }
        cout<<endl;
    }

}
ANS-
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  cout<<"Enter the row size:";
  int row_size,out,space,star;
  cin>>row_size;
  for(out=row_size;out>=-row_size;out--)
       {
           for(space=1;space<=abs(out);space++)
           {
               cout<<" ";
           }
           for(star=row_size;star>=abs(out);star--)
           cout<<"* ";
           cout<<"\n";
       }
}

    *
   * *
  *   *
 *     *
*       *
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << " ";
        }
        if (i > 0)
        {
            cout << "*";
        }

        cout << endl;
    }
}


    *
   ***
  *****
 *******
*********
#include <iostream>
using namespace std;
int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}


*********
 *******
  *****
   ***
    *
#include <iostream>
using namespace std;
int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 9-(2*i); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}



     *
    **
   ***
  ****
 *****
******
 *****
  ****
   ***
    **
     *
#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i < 12; i++)
    {
        if (i<=6)
        {
            for (int j = 0; j < 6-i; j++)
            {
                cout<<" ";
            }
            for (int k = 0; k < i; k++)
            {
                cout<<"*";
            }
            
        }
        if (i>6)
        {
            for (int j = 0; j < i-6; j++)
            {
                cout<<" ";
            }
            for (int k = 0; k < 12-i; k++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
    
}


*       * 
 *     *  
  *   *   
   * *    
    *
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "*";

        for (int k = 0; k < 7-(2*i); k++)
        {
            cout << " ";
        }

        if (i < 4)
        {
            cout << "*";
        }

        cout << endl;
    }
}


   *   
  * *
 *   * 
*     *
 *   *
  * *
   *

#include <iostream>
#include<cmath>
using namespace std;
int main(){
    for (int i = 3; i >= -3; i--)
    {
        for (int j = 0; j < abs(i); j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for (int k = 0; k < (3-abs(i))*2-1; k++)
        {
            cout<<" ";
        }
        if (i<3 & i>-3)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

*********
**** ****
***   ***
**     **
*       *


#include <iostream>
#include<cmath>
using namespace std;

void invtri(int size){
      int a;
      a=size;
    for (int i =0; i <a; i++)
    {
        for (int j = 0; j <= a-1-i; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            cout<<" ";
        }
        for (int l = 0; l < a-1-i; l++)
        {
            cout<<"*";
        }
        if (i>0)
        {
            cout<<"*";
        }
        cout<<"\n";
    }  
    }

int main(){
    
    for (int i = 0; i < 10; i++)
    {
        invtri(i);
    }  
}

    1
   321
  54321
 7654321
987654321

#include <iostream>
#include<cmath>
using namespace std;

void func(int size){
        for (int i = 1; i <= size; i++)
        {
            for (int k = 0; k < size-i; k++)
            {
                cout<<" ";
            }
            
            for (int j = 2*i-1; j >=1 ; j--)
            {
                cout<<j;
            }
            cout<<"\n";
        }  
    }

int main(){
    int size;
    cout<<"Size-";
    cin>>size;
    func(size);
}

1 
1 2
3 5 8
13 21 34 55
89 144 233 377 610

//0112358
#include <iostream>
#include<cmath>
using namespace std;

int fibo(int count){
    if (count==0)
    {
        return 0;
    }
    if (count==1)
    {
        return 1;
    }
    return (fibo(count-1)+fibo(count-2));
}
void print(int size){
    int count=1;
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= i ; j++,count++)
            {
                cout<<fibo(count)<<" ";
                
            }
            cout<<"\n";
        }  
    }

int main(){
    int size;
    cout<<"Size-";
    cin>>size;
    print(size);
}



#include <iostream>
#include<cmath>
using namespace std;

// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE

void print(int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<char(int('A')+i);
        }
        cout<<"\n";
    }
    }

// 1 A A A A
// 2 2 B B B
// 3 3 3 C C
// 4 4 4 4 D
*/
void print(int size){
    int count=0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<i+1<<" ";
        }
        for (int k= 0; k < size-i-1; k++)
        {
            cout<<char(int('A')+count)<<" ";
        }
        cout<<"\n";
        count++;
        
    }
}



int main(){
    int size;
    cout<<"Size-";
    cin>>size;
   print(size);
}
