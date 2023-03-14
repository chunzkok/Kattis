#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int R,C,ZR,ZC;
    cin >> R;
    cin >> C;
    cin >> ZR;
    cin >> ZC;

    string in, out;
    for (int r = 0; r < R; r++) {
        cin >> in;
        out = "";
        for (int c = 0; c < C; c++) {
            for (int zc = 0; zc < ZC; zc++) {
                out += in[c];
            }
        }
        for (int zr = 0; zr < ZR; zr++) {
            cout << out << '\n';
        }
    }
    return 0;
}
