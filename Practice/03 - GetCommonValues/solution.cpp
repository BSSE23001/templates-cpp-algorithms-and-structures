#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {1,2,3,4,5,4,7,4,9,4};
    vector<int> v2 = {1,2,3,4,4,7,9,4};
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    v.erase(unique(v.begin(),v.end()), v.end());
    v2.erase(unique(v2.begin(),v2.end()), v2.end());
    int i = 0, j = 0;
    while(i < v.size() && j < v2.size()) {
        if(v[i] == v2[j]) {cout << v[i] << " "; i++; j++;}
        else if (v[i] < v2[j]) i++;
        else j++;
    }
    return 0;
}
