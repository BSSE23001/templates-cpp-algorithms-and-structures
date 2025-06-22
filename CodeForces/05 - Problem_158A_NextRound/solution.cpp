#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, x = 0, a, kp = 1, idx = 0;
    vector<int> v;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if(i == k-1) {
            idx = i;
            if (a <= 0) {continue;}
            kp = a;
            x++;
        }
        if(i >= k && a>=kp) {
            x++;
        } else {
            v.push_back(a);
        }
    }
    for(int i = 0; i < idx; i++) {
        if(v[i] >= kp) x++;
    }
    cout << x;
    return 0;
}