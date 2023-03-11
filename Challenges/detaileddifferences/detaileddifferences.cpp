#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s1, s2, res;
    for (int testcase = 0; testcase < n; testcase++) {
        cin >> s1;
        cin >> s2;
        res = "";
        for (int i = 0; i < s1.length(); i++) {
            res += (s1[i] == s2[i] ? '.' : '*');
        }

        cout << s1 << endl;
        cout << s2 << endl;
        cout << res << endl << endl;
    }
    return 0;
}
