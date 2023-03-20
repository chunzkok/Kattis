#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int C, N, num;
    float sum, count;
    cin >> C;
    cout << fixed << setprecision(3);

    vector<int> scores;
    for (int c=0; c < C; c++) {
        scores = vector<int>();
        sum=count=0;
        cin >> N;
        for (int n = 0; n < N; n++) {
            cin >> num;
            sum += num;
            scores.push_back(num);
        }
        sum /= N;
        for (int n = 0; n < N; n++) {
            if (scores[n] > sum) count++;
        }
        cout << count/N*100 << "%\n";
    }
    return 0;
}
