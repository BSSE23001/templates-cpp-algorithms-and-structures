#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> num;
    string s;
    for (int i = 0; i < num; ++i) {
        cin >> s;
        int len = s.length();
        if (len > 10) {
            cout << s[0] << to_string(len - 2) << s[len - 1] << "\n";
        } else {
            cout << s << "\n";
        }
    }
    return 0;
}
