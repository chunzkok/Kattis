#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    // max value is 1,000,000 * 200,000
    long long curr_level, sum = 0, min_level = 1e7;
    for (int i = 0; i < N; i++) {
        cin >> curr_level;
        sum += curr_level;
        min_level = min(min_level, curr_level);
    }
    // lowest weight graph will be one with all edges
    // coming out from city with lowest level (star graph)
    cout << min_level * (N-2) + sum;
    return 0;
}
