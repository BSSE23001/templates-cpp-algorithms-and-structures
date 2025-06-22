#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,out;
    cin >> s1;
    sort(s1.begin(),s1.end());
    for(auto c : s1) {
        if(c=='+') continue;
        else {
            out+=c;
            out+="+";
        }
    }
    if(!out.empty()) out.pop_back();
    cout << out << endl;
    return 0;
}