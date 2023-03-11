#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    bool eye = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            if (eye) count--;
            else count++;
        } else {
            eye = true;
        }
    }
    cout << (count == 0 ? "correct" : "fix");
    return 0;
}
