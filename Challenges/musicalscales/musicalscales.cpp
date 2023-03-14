#include <iostream>
#include <string>
#include <map>

using namespace std;

const int progression[7] = {2,2,1,2,2,2,1};
const string notes[12] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

int main() {
    int n,curr,mask=0;
    cin >> n;
    string s, res="";
    map<string, int> m;
    map<string, int> m2;
    for (int i = 0; i < 12; i++) {
        m2[notes[i]] = i;
        curr=i;
        for (int p : progression) {
            m[notes[i]] |= (1 << curr);
            curr += p;
            if (curr >= 12) curr -= 12;
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> s;
        mask |= (1 << m2[s]);
    }
    int mask2 = (1 << 13) - 1;
    for (int i = 0; i < 12; i++) {
        if ( (mask & m[notes[i]]) && !(mask & (m[notes[i]] ^ mask2)) ) {
            if (res.length()) res += ' ' + notes[i];
            else res += notes[i];
        }
    }
    if (res.length()) cout << res;
    else cout << "none";
    return 0;
}
