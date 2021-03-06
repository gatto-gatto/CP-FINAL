
Sieve of Eratosthenes

int n;
vector<char> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}


---------------------------------------------------------------------------------
----------------------------------------------------------------------------------no of bits in a given number 

---------------bfs--------------


visited[x] = true;
distance[x] = 0;
q.push(x);
while (!q.empty()) {
int s = q.front(); q.pop();
// process node s
for (auto u : adj[s]) {
if (visited[u]) continue;
visited[u] = true;
distance[u] = distance[s]+1;
q.push(u);
}
}

---------------------------------------------------------------------------------
----------------------------------------------------------------------------------no of bits in a given number 



No of bits in n

int cnt=0;
while(n) {
	if((n & 1)>0)   cnt++;

	n = n >> 1;
}

int cnt=0;
while(n) {
	cnt++;
	n=n&(n-1);
}



---------------------------------------------------------------------------------
----------------------------------------------------------------------------------no of bits in a given number 
Primality tests

bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}




---------------------------------------------------------------------------------
----------------------------------------------------------------------------------no of bits in a given number 

Binary Exponentiation

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



---------------------------------------------------------------------------------
----------------------------------------------------------------------------------no of bits in a given number 


Integer factorization		// in case of so many no ... 


vector<long long> primes; //have to be global var

// this is function 
vector<long long> trial_division4(long long n) {
    vector<long long> factorization;
    for (long long d : primes) {
        if (d * d > n)
            break;
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}




// have to be in main 
int n; 			// whose prime you have to find
cin >> n;
vector<char> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;

for (int i = 2; i*i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}

for(int i=2;i*i <= n;i++) {
	if(is_prime[i]) primes.push_back(i);
}




vll ans = trial_division4();



---------------------------------------------------------------------------------
----------------------------------------------------------------------------------no of bits in a given number 

Euclidean algorithm for computing the greatest common divisor

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}


---------------------------------------------------------------------------------
----------------------------------------------------------------------------------no of bits in a given number 

Dfs

vector<int> adj[n]; // graph represented as an adjacency list
int n; // number of vertices

bool visited[1000+1];

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}



---------------------------------------------------------------------------------
----------------------------------------------------------------------------------no of bits in a given number 