#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    ll prev; cin >> prev;
    ll ans = 0;
    for (int i = 1; i < n; ++i) {
        ll a; cin >> a;
        if (a < prev) {
            ans += prev-a;
        }
        prev = max(prev,a);
    }
    cout << ans << endl;
}
