#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> permut;
    for(int i = 0; i < n; i++) {
        permut.push_back("Hello"+to_string(i));
    }
    do{
        for(auto x: permut) cout << x << " ";
        cout << "\n";
    } while (next_permutation(permut.begin(),permut.end()));
    return 0;
}
