#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <numeric>
#include <iomanip>
#include <climits>

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
#define inf 998244353
#define pi 3.141592653589793238462643383279502884197169399

struct mat
{
	int n, m;
	vector<vll> a;
	mat(int _n, int _m)
	{
		n = _n; m = _m;
		a.assign(n, vll(m, 0));
	}
	mat(vector<vll> v)
	{
		n = v.size(); m = n ? v[0].size():0; a = v;
	}
	inline void make_unit() 
	{
    	assert(n == m);
    	for (int i = 0; i<n; i++) for (int j = 0; j<n; j++) a[i][j] = (i == j);
  	}
	inline mat operator + (const mat &b)
	{	
		assert(n == b.n && m == b.m);	
		mat ans = mat(n, m);
		for(int i = 0; i<n; i++) for(int j = 0; j<m; j++) ans.a[i][j] = (a[i][j]%inf+(b.a[i][j])%inf)%inf;
		return ans;
	}
	inline mat operator - (const mat &b)
	{	
		assert(n == b.n && m == b.m);	
		mat ans = mat(n, m);
		for(int i = 0; i<n; i++) for(int j = 0; j<m; j++) ans.a[i][j] = (a[i][j]%inf-(b.a[i][j])%inf+inf)%inf;
		return ans;
	}
	inline mat operator * (const mat &b)
	{	
		assert(m == b.n);	
		mat ans = mat(n, b.m);
		for(int i = 0; i < n; i++) for(int j = 0; j < b.m; j++) for(int k = 0; k < m; k++) ans.a[i][j] = (ans.a[i][j] + a[i][k]*b.a[k][j]%inf)%inf;
		return ans;
	}
	inline mat binpow(ll b)
	{
		assert(n == m);
		mat ans(n, n), t = a;
		ans.make_unit();
		while(b)
		{
			if(b&1) ans = ans*t;
			t = t*t;
			b >>= 1;
		}
		return ans;
	}
	inline mat& operator += (mat& b) {return *this = (*this)+b;}
	inline mat& operator -= (mat& b) {return *this = (*this)-b;}
	inline mat& operator *= (mat& b) {return *this = (*this)*b;}
	inline bool operator == (mat& b) {return a == b.a;}
	inline bool operator != (mat& b) {return a != b.a;} 
};

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
}
