#include <iostream>

using namespace std;

int main() {
    int h, k, v, s;
    cin >> h;
    cin >> k;
    cin >> v;
    cin >> s;

    int distance = 0;
    while (h > 0) {
        v += s;
        v -= max(1, v/10);

        if (v >= k) {
            h += 1;
        } else if (v > 0) {
            if (--h == 0) v = 0;
        } else h=v=0;

        distance += v;
        if (s > 0) s--;
    }

    cout << distance;

    return 0;
}
