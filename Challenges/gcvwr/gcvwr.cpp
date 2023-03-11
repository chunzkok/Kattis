#include <iostream>

using namespace std;

int main() {
    int G, T, N;
    cin >> G;
    cin >> T;
    cin >> N;

    int capacity = (G - T) * 0.9;
    int item_weight;
    for (int i = 0; i < N; i++) {
        cin >> item_weight;
        capacity -= item_weight;
    }
    cout << capacity;

    return 0;
}
