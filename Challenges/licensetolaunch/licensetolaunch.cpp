#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, currval, minval=1e9, minindex=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> currval;
        if (currval < minval) {
            minval=currval;
            minindex=i;
        }
    }
    cout << minindex;
    return 0;
}
