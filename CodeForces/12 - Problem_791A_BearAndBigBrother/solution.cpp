#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,y=0;
    cin >> a >> b;
    while(a<=b) {
        a=3*a;
        b=2*b;
        ++y;
    }
    cout << y;
    return 0;
}