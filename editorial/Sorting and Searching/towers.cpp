#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        auto it = upper_bound(v.begin(), v.end(), a);
        int pos = it-v.begin();
        if (pos == v.size()) v.push_back(a);
        else {
            v[pos] = a;
        }
    }
    cout << v.size() << endl;
}
