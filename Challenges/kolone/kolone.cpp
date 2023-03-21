#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N1, N2, T;
    stack<char> left;
    queue<char> right;
    cin >> N1;
    cin >> N2;
    string s, res="";
    cin >> s;
    for (int i = 0; i < N1; i++) {
        left.push(s[i]);
    }
    cin >> s;
    for (int i = 0; i < N2; i++) {
        right.push(s[i]);
    }
    cin >> T;
    for (int i = 0; i < N1-T; i++) {
        res += left.top();
        left.pop();
    }
    if (T > N1) {
        for (int i = 0; i < T-N1; i++) {
            if (right.empty()) break;
            res += right.front();
            right.pop();
        }
    }
    int k = min(left.size(), right.size());
    for (int i = 0; i < k; i++) {
        res += right.front();
        right.pop();
        res += left.top();
        left.pop();
    }
    while (!left.empty()) {
        res += left.top();
        left.pop();
    }
    while (!right.empty()) {
        res += right.front();
        right.pop();
    }
    cout << res;

    return 0;
}
