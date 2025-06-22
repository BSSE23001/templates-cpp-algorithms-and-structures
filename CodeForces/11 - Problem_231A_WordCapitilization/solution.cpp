#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1;
    cin >> s1;
    if(s1[0] >= 'a') s1[0] = toupper(s1[0]);
    cout << s1;
    return 0;
}