#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, n; cin >> x >> n;
    set<int> s;
    multiset<int> ms;
    s.insert(0);
    s.insert(x);
    ms.insert(x);
    while (n--) {
        int a; cin >> a;
        auto it = s.upper_bound(a); // lower bound also works
        int hi = *(it--);
        int lo = *it;
        ms.erase(ms.find(hi-lo));
        ms.insert(hi-a);
        ms.insert(a-lo);
        s.insert(a);
        cout << *(--ms.end()) << " ";
    }
}
