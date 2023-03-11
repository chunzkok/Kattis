#include <iostream>

using namespace std;

int main() {
    int r, f;
    cin >> r;
    cin >> f;

    cout << ((((90 + 180*f/r) % 360) < 180) ? "up" : "down");

    return 0;
}
