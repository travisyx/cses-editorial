#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; 
    cin >> n;
    ll sum = 0;
    for (int i = 1; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
    }
    cout << n*(n+1)/2-sum << "\n";
}
