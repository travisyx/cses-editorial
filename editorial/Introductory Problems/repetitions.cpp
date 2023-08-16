#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int ans = 0, curr = 0;
    char prev = 'B';
    for (auto c: s) {
        if (c == prev) curr++;
        else {
            ans = max(ans,curr);
            curr = 1;
        }
        prev = c;
    }
    cout << max(ans,curr) << endl;
}
