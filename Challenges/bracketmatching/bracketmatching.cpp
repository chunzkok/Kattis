#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str1;
    cin >> str1;
    stack<char> s;
    char c;
    for (int i = 0; i < n; i++) {
        if (str1[i] == '(' || str1[i] == '[' || str1[i] == '{') {
            s.push(str1[i]);
        } else if (str1[i] == ')' || str1[i] == ']' || str1[i] == '}') {
            if (s.empty()) {
                cout << "Invalid";
                return 0;
            }
            c = s.top();
            s.pop();
            if ((c == '(' && str1[i] != ')') || (c == '[' && str1[i] != ']') || (c == '{' && str1[i] != '}')) {
                cout << "Invalid";
                return 0;
            }
        }
    }
    cout << (s.empty() ? "Valid" : "Invalid");
    return 0;
}
