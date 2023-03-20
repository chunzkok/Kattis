#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, curr;
    string s;
    while (true) {
        string res = "";
        cin >> n;
        vector<int> perm;
        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            perm.push_back(curr);
        }
        getline(cin, s);
        getline(cin, s);
        for (int i = 0; i < s.length(); i+= n) {
            string s2;
            if (i+n <= s.length()) s2 = s.substr(i, i+n);
            else s2 = s.substr(i, s.length());
            for (int j = s.length() - i - 1; j <= n; j++) s2 += ' ';
            for (int j = 0; j < n; j++) {
                res += s2[perm[j]-1];
            }
        }
        cout << '\'' << res << '\'' << endl;
    }
    return 0;
}
