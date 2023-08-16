#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        ll r, c; cin >> r >> c;
        ll v = max(r,c);
        ll ans = v*v;
        if (v%2 == 0) {
            if (r >= c) ans -= c-1;
            else ans -= 2*v-r-1;
        } else {
            if (c >= r) ans -= r-1;
            else ans -= 2*v-c-1;
        }
        cout << ans << endl;
    }
}
