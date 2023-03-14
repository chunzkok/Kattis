#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,C,G,mask;
    cin >> N;
    for (int n = 0; n < N; n++) {
        cin >> G;
        mask=0;
        for (int g=0; g<G; g++) {
            cin >> C;
            mask ^= C;
        }
        cout << "Case #" << n+1 << ": " << mask << '\n';
    }
    return 0;
}
