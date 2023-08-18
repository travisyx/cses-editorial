#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    sort(v.begin(), v.end());
    int ans = 0, cnt = 0;
    for (auto u: v) {
        cnt += u.second;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
