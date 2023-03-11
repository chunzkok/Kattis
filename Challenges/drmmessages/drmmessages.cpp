#include <iostream>
#include <string>

using namespace std;


char rotate(char c, int val);
string rotate_half(string s);

int main() {
    string s;
    cin >> s;

    string s1, s2;
    s1 = rotate_half(s.substr(0, s.length()/2));
    s2 = rotate_half(s.substr(s.length()/2, s.length()));

    string res = "";
    for (int i = 0; i < s1.length(); i++) {
        res += rotate(s1[i], s2[i] - 'A');
    }

    cout << res;
    

    return 0;
}

char rotate(char c, int val) {
    return char(((c - 'A' + val) % 26) + 'A');
}

string rotate_half(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += s[i] - 'A';
    }
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        res += rotate(s[i], sum);
    }
    return res;
}
