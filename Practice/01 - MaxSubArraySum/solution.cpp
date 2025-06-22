#include <bits/stdc++.h>

using namespace std;

#define RI(n) for(int i = 0; i < n; i++)

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int aval, s=0, b=0;
    int num;
    cin >> num;
    RI(num) {
        cin >> aval;
        s = max(aval, s + aval);
        b = max(b, s);
    }
    cout << b << "\n";
    return 0;
}
