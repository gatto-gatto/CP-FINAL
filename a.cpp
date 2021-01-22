#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;

#define PB push_back
#define MP make_pair

#define FOR(i,a,b)  for(int i=a;i<b;i++)

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
// global var
bool visited[1000+1]={false};
vector<int> adj[100];


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

///////////////////////////////////////////////////////////////////


void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}




/////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif


ll t; cin >> t;
while(t--) {
	
	adj[0].PB(1);
	adj[0].PB(2);
	adj[0].PB(3);
	adj[1].PB(0);
	adj[2].PB(0);
	adj[3].PB(0);
	dfs(0);
	for(auto x:adj) {
		for(auto y:x) {
			cout<<y;
		}
		cout<<endl;
	}


}



}



