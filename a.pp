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


bool solve() {




    
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif


ll t; cin >> t; 
while(t--) {
    solve();
}




}



