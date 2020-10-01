#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define F(i,a,b) for(ll i = a; i <= b; i++)
#define RF(i,a,b) for(ll i = a; i >= b; i--)
#define pii pair<ll,ll>
#define PI 3.14159265358979323846264338327950288
#define ll long long
#define ff first
#define ss second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define debug(x) cout << #x << " = " << x << endl
#define INF 1000000009
#define mod 1000000007
#define S(x) scanf("%d",&x)
#define S2(x,y) scanf("%d%d",&x,&y)
#define P(x) printf("%d\n",x)
#define all(v) v.begin(),v.end()
ll primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
int main()
{
	std::ios::sync_with_stdio(false);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, ans = 0;
		cin >> n;
		ll maximum_mask = ceil(pow(2ll, 8)) - 1ll; // 11111111 for 8 prime numbers (indexed from left to right)
		F(mask, 1, maximum_mask) // all possible combinations
		{
			ll denominator = 1ll; // number which will divide n in inclusion - exclusion principle
			ll setbits = __builtin_popcount(mask);
			F(j, 0, 7) // number of digits in mask is always 8
			{
				if (mask & (1 << j)) // if jth bit is set in mask then its contribution will count
					denominator = denominator * primes[j];
			}
			if (setbits & 1) // if number of set bits is 1 then add this to answer
				ans += n / denominator;
			else
				ans -= n / denominator;
		}
		cout << ans << endl;
	}
	return 0;
}