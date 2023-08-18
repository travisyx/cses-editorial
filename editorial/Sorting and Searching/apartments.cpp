#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> d(n), a(m);
    for (int i = 0; i < n; ++i) cin >> d[i];
    for (int i = 0; i < m; ++i) cin >> a[i];
    sort(d.begin(), d.end());
    sort(a.begin(), a.end());
    int idx_d = 0, idx_a = 0;
    int ans = 0;
    while (idx_d < d.size() && idx_a < a.size()) {
        if (abs(d[idx_d]-a[idx_a]) <= k) {
            ans++;
            idx_d++;
            idx_a++;
        } else if (d[idx_d] > a[idx_a]) idx_a++;
        else idx_d++;
    }
    cout << ans << endl;
}
