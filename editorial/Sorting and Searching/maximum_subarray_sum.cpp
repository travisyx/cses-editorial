#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll minX = -1e9;

int main() {
    int n; cin >> n;
    ll ans = minX;
    ll curr = minX;
    for (int i = 0; i < n; ++i) {
        ll a; cin >> a;
        curr = max(curr+a, a);
        ans = max(ans, curr);
    }
    cout << ans << endl;
}
