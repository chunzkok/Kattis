#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool has_repeated(string s) {
    unordered_set<char> hs;
    for (int i = 0; i < s.length(); i++) {
        if (hs.find(s[i]) != hs.end()) return true;
        hs.insert(s[i]);
    }
    return false;
}

bool left_better(string s1, string s2) {
    if (s1.length() < s2.length()) return true;
    else if (s1.length() > s2.length()) return false;

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] > s2[i]) return true;
        else if (s1[i] < s2[i]) return false;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    string s, res = "zzzzzzzzzzzzzzzzzzzzz";
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s.length() < 5 || has_repeated(s) || s.length() > res.length()) continue;
        if (left_better(s, res)) res = s;
    }
    cout << (res == "zzzzzzzzzzzzzzzzzzzzz" ? "neibb!" : res);
    return 0;
}
