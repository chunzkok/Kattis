#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T, C;
    string s;
    cin >> T;
    for (int tc = 0; tc < T; tc++) {
        cin >> C;
        double x, y;
        int num;
        x=y=0;
        int angle = 0;
        for (int c = 0; c < C; c++) {
            cin >> s;
            cin >> num;
            if (s == "fd") {
                x += num*sin(angle*M_PI/180);
                y += num*cos(angle*M_PI/180);
            } else if (s == "lt") {
                angle -= num;
            } else if (s == "bk") {
                x -= num*sin(angle*M_PI/180);
                y -= num*cos(angle*M_PI/180);
            } else if (s == "rt") {
                angle += num;
            }
        }
        cout << ((int) round(hypot(x,y))) << '\n';
    }
    return 0;
}
