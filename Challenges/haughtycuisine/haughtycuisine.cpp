#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, k;
    cin >> N;
    string s;
    cin >> k;
    cout << k << '\n';
    for (int i = 0; i < k; i++) {
        cin >> s;
        cout << s << '\n';
    }
    for (int i = 0; i < N-1; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) cin >> s;
    }
    return 0;
}
