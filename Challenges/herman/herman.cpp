#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(10);
    int r;
    cin >> r;
    cout << M_PI*r*r << '\n' << 2*r*r;
    return 0;
}
