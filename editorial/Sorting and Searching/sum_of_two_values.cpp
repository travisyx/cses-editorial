#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    map<int,int> m;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (m.find(x-a) != m.end()) {
            cout << m[x-a] << " " << i+1 << endl;
            return 0;
        }
        m[a] = i+1;
    }
    cout << "IMPOSSIBLE" << endl;
}
