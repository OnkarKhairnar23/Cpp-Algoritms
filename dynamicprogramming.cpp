#include <bits/stdc++.h>
#define ll int long long
#define rep(a,b,i) for(ll i=a; i<b ; i++)
#define co(a) cout<<a<<endl
#define ci(a) cin>>a
#define vll vector<ll>
#define pb push_back
#define all(n) (n).begin(), (n).end()
using namespace std;


int knapsackOR(int wt[], int val[], int w, int n){

	if(n==0 || w==0 ){
		return 0;
	}

	if(wt[n-1] <= w){
		return max( val[n-1] + knapsackOR(wt,val,w-wt[n-1],n-1) , knapsackOR(wt,val,w,n-1) );
	}
	else{
		return knapsackOR(wt,val,w,n-1);
	}
}


int t[5][8];
int knapsackWM(int wt[], int val[], int w, int n){
	if(n==0 || w==0 ){
		return 0;
	}

	if(t[n][w] != -1) return t[n][w];

	if(wt[n-1] <= w){
		return t[n][w]= max( val[n-1] + knapsackWM(wt,val,w-wt[n-1],n-1) , knapsackWM(wt,val,w,n-1) );
	}
	else{
		return t[n][w]= knapsackWM(wt,val,w,n-1);
	}

}



int main()
{

	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n=4,w=7;
	int wt[n]={1,3,4,5};
	int val[n]={1,4,5,7};

	// =================Only Recursion=====================
	// int ans = knapsackOR(wt,val,w,n);
	// cout<<ans<<endl;
	// ===============================================


	// ===============Recursion + Memoisation==============
	// for (int i = 0; i < n+1; ++i)
	// {
	// 	for (int j = 0; j < w+1; ++j)
	// 	{
	// 		t[i][j]=-1;
	// 	}
	// }
	// int ans = knapsackWM(wt,val,w,n);
	// cout<<ans<<endl;
	//=====================================================

	// =====================Only DP=================
	// int t[n+1][w+1];
	// for (int i = 0; i < n+1; ++i)
	// {
	// 	for (int j = 0; j < w+1; ++j)
	// 	{
	// 		if(i==0 || j==0){
	// 			t[i][j]=0;
	// 		}
	// 	}
	// }

	// for (int i = 1; i < n+1; ++i)
	// {
	// 	for (int j = 1; j < w+1; ++j)
	// 	{
	// 		if( wt[i-1]<=j ){
	// 			t[i][j] = max( val[i-1] + t[i-1][j-wt[i-1]] , t[i-1][j] );
	// 		}
	// 		else{
	// 			t[i][j] = t[i-1][j];
	// 		}
	// 	}
	// }

	// for (int i = 0; i < n+1; ++i)
	// {
	// 	for (int j = 0; j < w+1; ++j)
	// 	{
	// 		cout<<t[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	//=====================================

}