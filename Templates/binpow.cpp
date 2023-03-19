#include<iostream>
using namespace std;
using ll = long long;

// inspired from: https://cp-algorithms.com/algebra/binary-exp.html#applications 

ll binpow(ll a, ll b, ll m)
{
	a %= m;
	ll res = 1;
	while(b > 0)
	{
		if(b&1) res = (res*a)%m;
		a = (a*a)%m;
		b >>= 1;
	}
	return res;
}

int main()
{
	ll a, b, m;
	cin >> a >> b >> m;
	cout << binpow(a, b, m) << '\n';
}