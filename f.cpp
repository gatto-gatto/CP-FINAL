#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
#define PB push_back
#define FOR(i,a,b)  for(int i=a;i<b;i++)

int ans[10000][10000]={0};

int knapSack(int W, int wt[], int val[], int n) {
	if(W==0 or n==0) return 0;
	if(ans[W][n]) return ans[W][n];
	if(W>=wt[n-1]) {
		return ans[W][n]=max(wt[n-1]+knapSack(w-wt[n-1],wt,val,n-1),knapSack(w,wt,val,n-1));
	}
	if(W<wt[n]) {
		return ans[W][n]=knapSack(w,wt,val,n-1);
	}
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif




}



