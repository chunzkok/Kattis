#include <iostream>
#include <math.h>

using namespace std;

int main() {
    cout.precision(10);
    while (true) {
        double r;
        int m,c;
        cin >> r;
        cin >> m;
        cin >> c;
        if (r == 0 && m == 0 && c == 0) break;
        cout << M_PI*r*r << ' ' << 4.0*r*r*c/m << endl;
    }
    
    return 0;
}
