#include <iostream>
#include <algorithm>
#include <vector>
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

// n = ORDER, m = exponent, k = modulo
ll n, m, k, ORDER;

vector<vll> mul(vector<vll> x, vector<vll> y, ll m)
{
	vector<vll> ans(ORDER, vll(ORDER));
	for(int i = 0; i<ORDER; i++)
	{
		for(int j = 0; j<ORDER; j++)
		{
			ans[i][j] = 0;
			for(int k = 0; k<ORDER; k++)
			{
				ans[i][j] += ((x[i][k]%m)*(y[k][j]%m))%m;
				ans[i][j] %= m;
			}
		}
	}
	return ans;
}
 
vector<vll> binmat(vector<vll> x, ll n, ll m)
{
	if(n == 0)
	{
		vector<vll> identity(ORDER, vll(ORDER));
		for(int i = 0; i<ORDER; i++)
		{
			for(int j = 0; j<ORDER; j++)
			{
				if(i == j) identity[i][j] = 1;
				else identity[i][j] = 0;
			}
		}
		return identity;
	}
	vector<vll> ans = binmat(x, n/2, m);
	ans = mul(ans, ans, m);
	if(n%2) ans = mul(ans, x, m);
	return ans;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin >> n >> m >> k; 
	vector<vll> x(ORDER, vll(ORDER));
	// populate x
	for(int i = 0; i<ORDER; i++) for(int j = 0; j<ORDER; j++) cin >> x[i][j];
	// finding the ans
	vector<vll> ans = binmat(x, m, k);
	// outputing the ans
	for(int i = 0; i<ORDER; i++) {for(int j = 0; j<ORDER; j++) cout << ans[i][j] << " "; cout << '\n';}
}
