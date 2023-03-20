#include <iostream>

using namespace std;

int main() {
    bool freeFood[365] = {false};
    int N;
    cin >> N;
    int s, t;
    for (int i = 0; i < N; i++) {
        cin >> s;
        cin >> t;
        for (int j = s; j <= t; j++) {
            freeFood[j-1] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < 365; i++) {
        if (freeFood[i]) count++;
    }
    cout << count;
    return 0;
}
