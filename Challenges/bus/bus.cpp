#include <iostream>

using namespace std;

int main() {
    int T, k, res;
    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> k;
        res = 1;
        for (int i = 1; i < k; i++) {
            res *= 2;
            res += 1;
        }
        cout << res << '\n';
    }
    return 0;
}
