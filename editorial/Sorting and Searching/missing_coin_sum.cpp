#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    ll ans = 1;
    for (auto u: v) {
        if (u > ans) {
            cout << ans << endl;
            return 0;
        }
        ans += u;
    }
    cout << ans << endl;
}
