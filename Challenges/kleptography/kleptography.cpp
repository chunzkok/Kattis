#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n;
    cin >> m;

    string cipher;
    string res;
    cin >> res;
    cin >> cipher;

    res = string(res.rbegin(), res.rend());
    for (int i = 0; i < m-n; i++) {
        int temp = cipher[m-1-i] - res[i];
        res += char(temp > -1 ? (temp + 'a') : (temp + 26 + 'a'));
    }
    cout << string(res.rbegin(), res.rend());


    return 0;
}
