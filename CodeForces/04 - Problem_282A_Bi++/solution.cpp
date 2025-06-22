#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num, x = 0;
    string p;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> p;
        for(auto c : p) {
            if(c == '-') {x--; break;}
            else if(c == '+') {x++; break;}
        }
    }
    cout << x;
    return 0;
}