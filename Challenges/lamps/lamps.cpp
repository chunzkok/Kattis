#include <iostream>
#include <cmath>

using namespace std;

double calc_diff(int x, int P) {
    return (49.0*x*P)/100000.0 + 5*ceil(x/1000.0) - 60;
}

int main() {
    int h,P;
    cin >> h;
    cin >> P;
    int low=0, high=8000, mid;
    while (low < high) {
        mid = low + (high-low)/2;
        if (calc_diff(mid, P) < 0) low = mid+1;
        else high=mid;
    }
    cout << ceil(low/float(h));
    return 0;
}
