#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <functional>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, p1,p2,p3,p4;
    string s;
    cin >> m;
    // max 30 targets
    array<function<bool(int, int)>, 30> targets;
    for (int i = 0; i < m; i++) {
        cin >> s;
        cin >> p1;
        cin >> p2;
        cin >> p3;
        if (s == "rectangle") {
            cin >> p4;
            targets[i] = [=] (int x, int y) -> bool {
                return (p1 <= x) && (x <= p3) && (p2 <= y) && (y <= p4);
            };
        } else if (s == "circle") {
            targets[i] = [=] (int x, int y) -> bool {
                return hypot(abs(x-p1), abs(y-p2)) <= p3;
            };
        }
    }
    int n, x, y, count=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> y;
        count = 0;
        for (int j = 0; j < m; j++) {
            if (targets[j](x,y)) count++;
        }
        cout << count << '\n';
    }
    return 0;
}
