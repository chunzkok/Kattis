#include <iostream>
#include <string>
#include <map>
#include <array>

using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, array<bool, 13> > m;
    m['P'].fill(false);
    m['K'].fill(false);
    m['H'].fill(false);
    m['T'].fill(false);
    map<char, int> m2;
    m2['P'] = 13;
    m2['K'] = 13;
    m2['H'] = 13;
    m2['T'] = 13;

    int ind;
    for (int i = 0; i < s.length(); i+=3) {
        ind = stoi(s.substr(i+1,i+3));
        if (m[s[i]][ind]) {
            cout << "GRESKA";
            return 0;
        }
        m[s[i]][ind] = true;
        m2[s[i]] -= 1;
    }
    cout << m2['P'] << ' ' << m2['K'] << ' ' << m2['H'] << ' ' << m2['T'];
    return 0;
}
