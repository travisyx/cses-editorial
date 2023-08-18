#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    multiset<int> ms;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        ms.insert(a);
    }
    for (int i = 0; i < m; ++i) {
        int a; cin >> a;
        auto it = ms.upper_bound(a);
        if (it == ms.begin()) {
            cout << -1 << endl;
        } else {
            auto before = prev(it);
            cout << *before << endl;
            ms.erase(before);
        }
    }
}
