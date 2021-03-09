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


void solve() {




    
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









// NOTE IMP







//--------------------------------------------------//
/*
stl 

set<int> s (batteries.begin(),batteries.end());
priority_queue<int, vector<int>, greater<int> > pq; // minQ


*/

// lower_bound upper_bound

//----------------------------SET--------------------------------//
/*
erase  key and auto both are valid 
insert only value
clear()
find == gives us the auto if that not present then we get end
count()
empty()
*/

//------------------------unordered_set--------------------------//
/*
empty()
size()
find()
erase()
find()
clear()

*/


//------------------------multiset--------------------------//
/*
empty()
size()
find()
erase()  erase all the element with that particular val
count()  no of element in multiset
clear()

*/

//------------------------vector--------------------------//
/*
erase() using iterator
insert() using iterator
size()
push_back()
pop_back()
front() // first element
back() // last element
reserve 
flip
*/

//------------------------map--------------------------//
/*
count()
erase()
size()



*/

//------------------------unordered_map--------------------------//
/*
same as map but its dont store in sorted order hence its faster then map


*/


//------------------------multimap--------------------------//
/*
two key can be identical in this


*/



//------------------------priority_queue--------------------------//
/*
priority_queue<int, vector<int>, greater<int> > pq; // min heap
pop()
top()
empty()
size()

*/
