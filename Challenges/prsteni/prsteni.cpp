#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, first, curr, div;
    cin >> N;
    cin >> first;
    for (int i = 1; i < N; i++) {
        cin >> curr;
        div = gcd(first, curr);
        cout << first/div << '/' << curr/div << '\n';
    }
    return 0;
}
