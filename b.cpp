#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;

#define PB push_back
#define MP make_pair

#define FOR(i,a,b)  for(long long i=a;i<b;i++)


#define endl "\n"

/////////////////////////////////////////////////////////////////////////////
// global var
vector<int> adj[1000];
bool visited[10000]={false};





/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

/////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}


/////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////




int dp[1000][1000]={0};

int knapSack(int w, int wt[], int val[], int n)
{
	if(dp[w][n]) return dp[w][n];
    if (n == 0 || w == 0)
        return 0;
 
    if (wt[n - 1] > w)
        return dp[w][n]=knapSack(w, wt, val, n - 1);
    else
        return dp[w][n]=max(
            val[n - 1]
                + knapSack(w - wt[n - 1], 
                           wt, val, n - 1),
            knapSack(w, wt, val, n - 1));
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));

}



