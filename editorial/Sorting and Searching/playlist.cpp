#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    map<int,int> m;
    int ans = 0, curr = 0, lidx = 0;
    for (int i = 0; i < n; ++i) {
        if (!m.count(v[i])) {
            curr++;
            m[v[i]] = i;
        } else {
            ans = max(ans, curr);
            lidx = max(lidx, m[v[i]]);
            m[v[i]] = i;
            curr = i-lidx;
        }
    }
    cout << max(ans,curr) << endl;
}
