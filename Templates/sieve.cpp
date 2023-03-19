#include <iostream>
#include <vector> 

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define pb push_back

vll primes;

void sieve(int n)
{
    const int lim = n;
    vector<bool> is_Prime(lim+1, true);
    is_Prime[0] = is_Prime[1] = false;
    for (int i = 2; i <= lim; i++) 
    {
        if(is_Prime[i]) primes.pb(i);
        if(is_Prime[i] && (ll)i * i <= lim) for(int j = i * i; j <= lim; j += i) is_Prime[j] = false;
    }
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n; cin >> n;
	sieve(n);
	cout << primes.size() << '\n';
	for(auto it: primes) cout << it << " ";	
	cout << '\n';
}