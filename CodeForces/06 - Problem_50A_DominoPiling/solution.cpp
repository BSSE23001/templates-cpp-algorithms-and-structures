#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n, x =0;
    cin >> m >> n;
    if((m&1) && (n&1)) {
        if(m<=n) {
            x = m * ((n-1)/2);
            x+= m/2;
        } else if (n < m)
        {
            x = n * ((m-1)/2);
            x+= n/2;
        }
    } else if ((m&1) && ~(n&1)) {
        x = m*(n/2);
    } else if (~(m&1) && ~(n&1))
    {
        if(m<=n) {
            x = (m/2) * n;
        } else if (n < m)
        {
            x = (n/2) * m;
        }
    } else if (~(m&1) && (n&1)) {
        x = n*(m/2);
    }    
    cout << x;
    return 0;
}