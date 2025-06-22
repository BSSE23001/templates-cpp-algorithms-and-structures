#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    int output = 0;
    for(int i = 0; i < s1.length(); ++i) {
        if(s1[i] < s2[i]) {output = -1; break;}
        else if(s1[i] > s2[i]) {output = 1; break;}
    }
    cout << output << endl;
    return 0;
}