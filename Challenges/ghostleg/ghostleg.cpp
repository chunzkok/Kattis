#include <iostream>
#include <numeric>
#include <iterator>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    int seq[n];
    iota(seq, seq+n, 1);
    int rung, temp;
    for (int i = 0; i < m; i++) {
        cin >> rung;
        temp = seq[rung-1];
        seq[rung-1] = seq[rung];
        seq[rung] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout << seq[i] << endl;
    }
    return 0;
}
