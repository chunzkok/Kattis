#include <iostream>
#include <string>

using namespace std;

static const string up = "Skru op!";
static const string down = "Skru ned!";
static const int max_vol = 10;
static const int min_vol = 0;

int main() {
    int vol = 7;
    int n;
    cin >> n;

    string req;
    getline(cin, req);
    for (int line = 0; line < n; line++) {
        getline(cin, req);
        if (req == up && vol < max_vol) vol++;
        else if (req == down && vol > min_vol) vol--;
    }

    cout << vol;
    return 0;
}
