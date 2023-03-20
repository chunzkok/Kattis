#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
#include <functional>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,K;
    cin >> N;
    cin >> K;
    int a;
    unordered_map<int, int> m;
    for (int i = 0; i < N; i++) {
        cin >> a;
        if (m.find(a) == m.end()) m[a] = 1;
        else m[a]++;
    }
    priority_queue<int> pq;
    for (auto entry : m) {
        pq.push(entry.second);
    }

    for (int i = 0; i < K; i++) {
        pq.push(pq.top()-1);
        pq.pop();
    }

    cout << pq.top();

    return 0;
}
