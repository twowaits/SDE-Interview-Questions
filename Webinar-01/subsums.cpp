#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;

//Input Vector is from Q
// Output is Vector of possible subsets sums
vector<ll> subsets(vector<ll> v) {
	vector<ll> ans;

	int n = v.size(); // n <= 17 <= 10^6
	//Bitmasking - Subset Finding
	for (int i = 0; i < (1 << n); i++ ) {
		int j = 0;
		ll sum = 0 ;
		for (int no = i; no > 0; no = no >> 1) {
			if (no & 1) {
				sum += v[j];
			}
			j++;
		}
		ans.push_back(sum);

	}
	return ans;
}


int main() {

	vector<ll> v1, v2; //17,17
	int n, a, b;
	cin >> n >> a >> b;

	//input
	int n1 = n / 2;
	int n2 = n - n1;


	for (int i = 0; i < n1; i++) {
		ll x;
		cin >> x;
		v1.push_back(x);
	}

	for (int i = 0; i < n2; i++) {
		ll x;
		cin >> x;
		v2.push_back(x);
	}
	//subsets sums of v1 and v2
	vector<ll> sv1, sv2;

	sv1 = subsets(v1);
	sv2 = subsets(v2);

	// sort atleast sv2 sorted
	sort(sv2.begin(), sv2.end());


	//matching using binary array
	int ans = 0;
	for (int i = 0; i < sv1.size(); i++) {
		ll lo = a - sv1[i];
		ll hi = b - sv1[i];

		int m1 = lower_bound(sv2.begin(), sv2.end(), lo) - sv2.begin();
		int m2 = upper_bound(sv2.begin(), sv2.end(), hi) - sv2.begin();

		ans += (m2 - m1);

	}
	cout << ans << endl;

	return 0;
}