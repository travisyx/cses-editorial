#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    if (n == 2 || n == 3) cout << "NO SOLUTION" << endl;
    else {
        for (int i = n-(n%2==1?0:1); i > 0; i -= 2) cout << i << " ";
        for (int i = n-(n%2); i > 0; i -= 2) cout << i << " ";
        cout << endl;
    }
}
