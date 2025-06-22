#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1;
    int out = 0;
    cin >> s1;
    sort(s1.begin(),s1.end());
    s1.erase(unique(s1.begin(),s1.end()),s1.end());
    for(auto c : s1) {
        ++out;
    }
    if(out&1) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";
    return 0;
}