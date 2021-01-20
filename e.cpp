#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
#define PB push_back
#define FOR(i,a,b)  for(int i=a;i<b;i++)

ll ans[1000]={0};

ll fibo(int a) {
  if(ans[a]) return ans[a];
  if(a==1 or a==2) return ans[a]=1;
  return ans[a]=fibo(a-1) + fibo(a-2);
}


int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif

cout<<fibo(1000);


}



