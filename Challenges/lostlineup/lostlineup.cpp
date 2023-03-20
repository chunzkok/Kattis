#include <iostream>

using namespace std;

int main() {
    int n, curr;
    cin >> n;
    int order[n-1];
    order[0] = 1;
    for (int i = 2; i <= n; i++) {
        cin >> curr;
        order[curr] = i;
    }
    cout << 1;
    for (int i = 0; i < n-1; i++) {
        cout << ' ' << order[i];
    }
    return 0;
}
