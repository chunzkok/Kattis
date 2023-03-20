#include <iostream>
#include <string>

using namespace std;

int main() {
    int a=0,b=0;
    string s, res="";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'S') a++;
    }
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'S') b++;
    }
    a *= b;
    for (int i = 0; i < a; i++) {
        res += "S(";
    }
    res += '0';
    for (int i = 0; i < a; i++) {
        res += ")";
    }
    cout << res;
    return 0;
}
