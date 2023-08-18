#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        v.push_back({b,a});
    }
    // Choose the one that ends as early as possible
    sort(v.begin(), v.end());
    int bnd = v[0].first;
    int ans = 1;
    for (int i = 1; i < v.size(); ++i) {
        if (v[i].second >= bnd) {
            ans++;
            bnd = v[i].first;
        }
    }
    cout << ans << endl;
}
