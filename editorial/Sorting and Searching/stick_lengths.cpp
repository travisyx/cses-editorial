#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    ll ans = 0;
    for (auto u: v) ans += abs(u-v[n/2]);
    cout << ans << endl;
}
