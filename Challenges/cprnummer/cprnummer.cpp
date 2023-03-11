#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int weights[10] = {4,3,2,7,6,5,4,3,2,1};
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i < 6) {
            sum += weights[i] * (s[i] - '0');
        } 
        else if (i == 6) continue;
        else {
            sum += weights[i-1] * (s[i] - '0');
        }
    }
    cout << int(sum%11 == 0);
    return 0;
}
