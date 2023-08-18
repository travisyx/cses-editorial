#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> s;
    while (n--) {
        int a; cin >> a;
        s.insert(a);
    }
    cout << s.size() << "\n";
}
