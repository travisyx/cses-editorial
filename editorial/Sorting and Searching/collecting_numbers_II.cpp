#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<int> nums(n+2), inds(n+2);
    for (int i = 1; i <= n; ++i) {
        int a; cin >> a;
        nums[i] = a;
        inds[a] = i;
    }
    nums[0] = inds[0] = 0;
    nums[n+1] = inds[n+1] = n+1;
    int ans = 1;
    for (int i = 0; i <= n; ++i) {
        if (inds[i] > inds[i+1]) ans++;
    }
    while (m--) {
        int a, b; cin >> a >> b;
        int idx = nums[a], idy = nums[b];
        int tmp = 0;
        if (inds[idx-1] > inds[idx]) tmp++;
        if (inds[idx] > inds[idx+1]) tmp++;
        if (inds[idy-1] > inds[idy]) tmp++;
        if (inds[idy] > inds[idy+1]) tmp++;
        if (abs(idx-idy) == 1) {
            if (inds[min(idx,idy)] > inds[max(idx,idy)]) tmp--;
        }
        ans -= tmp;
        swap(nums[a],nums[b]);
        swap(inds[nums[a]], inds[nums[b]]);
        idx = nums[a], idy = nums[b];
        tmp = 0;
        if (inds[idx-1] > inds[idx]) tmp++;
        if (inds[idx] > inds[idx+1]) tmp++;
        if (inds[idy-1] > inds[idy]) tmp++;
        if (inds[idy] > inds[idy+1]) tmp++;
        if (abs(idx-idy) == 1) {
            if (inds[min(idx,idy)] > inds[max(idx,idy)]) tmp--;
        }
        ans += tmp;
        cout << ans << endl;
    }
}
