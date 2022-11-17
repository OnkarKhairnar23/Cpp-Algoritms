#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=9;
    int a[n]={2,2,3,3,3,1,2,2,2};
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int c=1;
        for (int j = i+1; j < n ; j++)
        {
            if(a[i]==a[j]){
                c++;
            }
        }
        mp.insert({ a[i],c });
    }
    
    for(auto i : mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
	return 0;
}
