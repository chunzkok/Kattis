#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s.length() << ' ';
    int x=0,y=0,offset;
    for (int i = 0; i < s.length(); i++) {
        offset = pow(2, s.length()-i-1);
        switch (s[i]) {
            case '1':
                x += offset;
                break;
            case '2':
                y += offset;
                break;
            case '3':
                x += offset;
                y += offset;
                break;
            default:
                break;
        }
    }
    cout << x << ' ' << y;
    return 0;
}
