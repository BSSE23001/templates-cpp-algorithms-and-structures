#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int row = 0, col = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int a;
            cin>>a;
            if(a==1) {
                row = i;
                col = j;
            }
        }
    }
    cout << abs(row-2) + abs(col-2) << endl;
    return 0;
}