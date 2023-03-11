#include <iostream>

using namespace std;

int fact_lastnum[11] = {1, 1, 2, 6, 4, 0, 0, 0, 0, 0, 0};
int main() {
    int T;
    cin >> T;
    int N;
    for (int tc = 0; tc < T; tc++) {
        cin >> N;
        cout << fact_lastnum[N] << endl;
    }
    return 0;
}
