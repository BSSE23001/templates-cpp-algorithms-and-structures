#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    if((num & 1) || num <= 2) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
