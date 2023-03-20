#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n;
    int options[n][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> k;
            options[j][i] = k;
        }
    }
    for (int i = 0; i < n; i++) {
        sort(begin(options[i]), end(options[i]));
        if (i > 0) cout << ' ';
        cout << options[i][1];
    }
    return 0;
}
