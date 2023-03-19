#include <iostream>
#include <array>

using namespace std;

// #include <atcoder/all>
// using namespace atcoder;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

#define pb push_back
#define N 100000
#define all(x) (x).begin(), (x).end()
#define inf 1000000007
#define pi 3.141592653589793238462643383279502884197169399
#define MAX_N 3000005
 
ll fac[MAX_N], finv[MAX_N];

ll binpow(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

ll C(ll n, ll m)
{
	if(n == m || m == 0) return 1;
	if(m>n) return 0;
	return (((fac[n]*finv[m])%inf)*finv[n-m])%inf;
}

void precompute()
{
	fac[0] = 1;
	for(int i = 1; i<MAX_N; i++)
	{
		fac[i] = (fac[i-1]*i)%inf;
		finv[i] = binpow(fac[i], inf-2, inf);
	}
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
	precompute();
	ll n, m;
	cin >> n >> m;
	cout << C(n, m) << '\n';
}
