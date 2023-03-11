#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> s;
    int knot_num;
    for (int i = 0; i < n; i++) {
        cin >> knot_num;
        s.insert(knot_num);
    }
    for (int i = 0; i < n-1; i++) {
        cin >> knot_num;
        s.erase(knot_num);
    }
    cout << *(s.begin());

    return 0;
}
