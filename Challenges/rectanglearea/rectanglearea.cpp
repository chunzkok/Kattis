#include <iostream>

using namespace std;

int main() {
    double x1,y1,x2,y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    double area = (x2-x1) * (y2-y1);

    cout << (area > 0 ? area : -area);
    return 0;
}
