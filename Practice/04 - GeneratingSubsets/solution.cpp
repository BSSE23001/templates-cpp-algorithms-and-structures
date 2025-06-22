#include <bits/stdc++.h>

using namespace std;

vector<int> subsets;
int n;

void getSubsets(int k) {
    if(k == n) {
        for (auto x : subsets) {cout << x << " ";}
        cout << "\n";
    } else {
        getSubsets(k+1);
        subsets.push_back(k);
        getSubsets(k+1);
        subsets.pop_back();
    }
}

void getSubsetsByBit() {
    for(int b = 0; b < (1 << n); b++) {
        vector<int> subs;
        for(int i = 0; i < n; i++) {
            if(b & (1 << i)) {
                subs.push_back(i);
            }
        }
        for (auto x : subs) {cout << x << " ";}
        cout << "\n";
    }
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    // getSubsets(0);
    getSubsetsByBit();
    return 0;
}
