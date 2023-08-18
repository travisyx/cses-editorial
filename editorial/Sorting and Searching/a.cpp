#include <bits/stdc++.h>
#include <bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;

// Define ordered set
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k; cin >> n;
    k = 1;
    ordered_set<int> s;
    for (int i = 1; i <= n; ++i) s.insert(i);
    int idx = 0;
    while (s.size() >= 1) {
        idx += k;
        idx %= s.size();
        cout << *s.find_by_order(idx) << " ";
        s.erase(*s.find_by_order(idx));
    }
}
