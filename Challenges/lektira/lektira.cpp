#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string play(string s, int p1, int p2) {
    reverse(s.begin(), s.begin()+p1);
    reverse(s.begin()+p1, s.begin()+p2);
    reverse(s.begin()+p2, s.end());
    return s;
}

int main() {
    string s, temp;
    cin >> s;
    string best = ([&](char c, int t) {string res=""; for (int i=0; i<t; i++) res+=c; return res;})('z', 51);
    for (int i = 1; i < s.length()-1; i++) {
        for (int j = i+1; j < s.length(); j++) {
            temp = play(s, i, j);
            if (temp < best) best = temp;
        }
    }
    cout << best;
    return 0;
}
