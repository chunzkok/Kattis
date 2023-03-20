#include <iostream>

using namespace std;

int main() {
    int dp[31] = {1, 0, 3};
    for (int i = 3; i <= 30; i++) {
        dp[i] = dp[i-2]*3;
        for (int j = i-4; j >= 0; j-= 2) {
            dp[i] += dp[j]*2;
        }
    }
    int k;
    while (true) {
        cin >> k;
        if (k == -1) break;
        cout << dp[k] << '\n';
    }

    return 0;
}
