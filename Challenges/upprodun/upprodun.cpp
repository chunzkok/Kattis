#include <iostream>
#include <string>

using namespace std;

int main() {
    int N,M;
    cin >> N;
    cin >> M;
    int min_pax = M/N;
    int leftover = M%N;
    string min_stars(min_pax, '*');
    for (int i = 0; i < N; i++) {
        cout << min_stars;
        if (leftover) {
            cout << '*';
            leftover--;
        }
        cout << endl;
    }
    return 0;
}
