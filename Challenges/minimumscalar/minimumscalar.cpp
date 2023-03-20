#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int T, N, num;
    cin >> T;
    vector<int> x, y;
    for (int t = 0; t < T; t++) {
        x.clear();
        y.clear();
        cout << "Case #" << t+1 << ": ";
        cin >> N;
        for (int n = 0; n < N; n++) {
            cin >> num;
            x.push_back(num);
        }
        for (int n = 0; n < N; n++) {
            cin >> num;
            y.push_back(num);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end(), [](int a, int b) { return a > b; });
        long long count = 0;
        for (int n = 0; n < N; n++) {
            count += ((long long)x[n]) * ((long long)y[n]);
        }
        cout << count << '\n';
    }
    
    return 0;
}
