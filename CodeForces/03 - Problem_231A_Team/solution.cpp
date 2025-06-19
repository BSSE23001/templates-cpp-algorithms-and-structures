#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num, prob = 0;
    bool p, v, t;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> p >> v >> t;
        if((v&t) || (p&t) || (p&v)) {
            prob++;
        }
    }
    cout << prob;
    return 0;
}


// 0 0 0  1
// 0 0 1  1
// 0 1 0  1
// 0 1 1  0
// 1 0 0  1
// 1 0 1  0
// 1 1 0  0
// 1 1 1  0