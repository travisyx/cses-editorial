#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        v.push_back({a,i});
    }
    sort(v.begin(), v.end());
    int ans = 1;
    for (int i = 0; i < n-1; ++i) {
        if (v[i].second > v[i+1].second) ans++;
    }
    cout << ans << endl;
}
